#include <iostream>
using namespace std;
int main()
{
	
	const int a = 100;
	char v[a];
	cin.getline(v, 100);
	for (int i = 0; i < a; i++)
	{
		if (isalnum(*(v + i)) == false) { 
			cout << i <<'\n'; 
        }    
	}

	return 0;
}