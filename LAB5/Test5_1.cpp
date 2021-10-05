#include <iostream>
#include <string>
using namespace std;
int main()
{
    char ch;
    cout << "\nEnter a character";
    cin >> ch;
    cout << endl;
    if (ch >= 'a' && ch <= 'z')
        cout << ch << "is  character.";
    else if (ch >= 'A' && ch <= 'Z')
        cout << ch << "is  character.";
    else if (ch >= '0' && ch <= '9')
        cout << ch << "is numeric.";
    else
        cout << ch << "is special character.";
    cout << endl;
    return (0);
}
