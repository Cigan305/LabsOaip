#include<iostream>

using namespace std;
int main()
{
    char letter = 'S';
    char *pLetter = &letter;
    char &letterRef = letter;

    cout << letter  << endl;
    cout << *pLetter << endl;
    cout << letterRef << endl;
    cout << pLetter << endl;
    cout << &letterRef << endl;
    cout << &letter;
    letter++;
    *pLetter++;
    letterRef++;

    cout << letter << endl;
    cout << *pLetter << endl;
    cout << letterRef << endl;

    cout << pLetter << endl;
    cout << letterRef << endl;
    
    return 0;
}