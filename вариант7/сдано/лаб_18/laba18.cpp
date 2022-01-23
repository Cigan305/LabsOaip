#include<iostream>
#include<string>

using namespace std;
struct train
{
	char punktnaznach[80];
	int nomer;
	char type[50];
	int price;
};

void shellSort(train*, int);
void insertSort(train*, int);
bool search(train*, int, int);

int main()
{
	int n;
	do
	{
		cout << "Введите число рейсов: ";
		cin >> n;
	} while (n <= 0);

	train* poezdka = new train[2];

	if (poezdka == NULL)
	{
		cout << "Программа завершает работу ввиду проблем с памятью:" << endl;
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "\nРейс №" << i + 1 << endl;
		cout << "Введите номер рейса: ";
		cin >> poezdka[i].nomer;
		cout << "Введите место отправки рейса: ";
		cin.getline(poezdka[i].punktnaznach, 80);
		cout << "Введите тип поезда: ";
		cin.getline(poezdka[i].type, 80);
		cout << "Введите цену билета: ";
		cin >> poezdka[i].price;
	}

	cout << "\nОтсортированные цены билета: " << endl;
	shellSort(poezdka, n);

	for (int i = 0; i < n ; i++)
	{
		cout << poezdka[i].price << ' ';
	}

	cout << "\nОтсортированные пункты назначения: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << poezdka[i].punktnaznach << ' ';
	}

	int reys;

	cout << "\nВведите номер рейса для его поиска: ";
	cin >> reys;

	bool result = search(poezdka, reys, n);

	if (result == true)
	{
		cout << "Такой рейс есть:" << endl;
	}

	else
	{
		cout << "Такого рейса нет:" << endl;
	}

	return 0;
}

void shellSort(train* poezdka, int n)
{
	for (int i = n / 2; i > 0; i = i / 2)
	{
		for (int j = 0; j < n - 1; j++)
		{
			for (int k = j; k > -1; k = k - i)
			{
				if (poezdka[k].price > poezdka[k + i].price)
				{
					train t = poezdka[k];
					poezdka[k] = poezdka[k + 1];
					poezdka[k + i] = t;
				}
				else
				{
					k = 0;
				}
			}
		}
	}
}

void insertSort(train* poezdka, int n)
{
	for (int i = 0; i < n; i++)
	{
		train t = poezdka[i];
		for (int j = i - 1; j > -1 && t.punktnaznach < poezdka[j].punktnaznach; j--)
		{
			poezdka[j + 1] = poezdka[j];
			poezdka[j] = t;
		}
	}
}

bool search(train* poezdka, int x, int n)
{
	int p;
	cout << "1) последовательный поиск\n2) бинарный поиск: ";
	cin >> p;
	switch (p)
	{
		case 1:
		{
			for (int i = 0; i < n; i++)
			{
				if (poezdka[i].nomer == x)
				{
					return true;
				}
			}
			return false;
		}
		case 2:
		{
			for (int i = 0; i < n - 1; i++)
			{
				for (int j = 0; j < n - 1 - i; j++)
				{
					if (poezdka[j].nomer > poezdka[j + 1].nomer)
					{
						train t = poezdka[j];
						poezdka[j] = poezdka[j + 1];
						poezdka[j + 1] = t;
					}
				}
			}
			int low = poezdka[0].nomer, high = poezdka[n - 1].nomer, middle = (low + high) / 2;
			while (high >= low)
			{

				if (middle == x)
				{
					return true;
				}
				else
				{
					if (x > middle)
					{
						low = middle + 1;
					}
					else
					{
						high = middle - 1;
					}
					middle = (low + high) / 2;
				}
			}
		}
		return false;
	}
}