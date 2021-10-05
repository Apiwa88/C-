#include <iostream>
#include <string>
using namespace std;
int main()
{
    char Ch;
    int Cout = 0;
    string Str;
    cout << "Enter String :";
    while (cin >> Ch)
    {
        Cout++;
        Str += Ch;
    }
    cout << "\nLenght of string(" << Str << ")is";
    cout << Cout << endl;
    return (0);
}