#include <iostream>
using namespace std;
int main()
{
    int Number, Cout;
    bool Flag = true;
    do
    {
        cout << "\nInput number faction(0-20)? :";
        cin >> Number;
        if ((Number >= 0) && (Number <= 20))
            Flag = false;
        else
            cout << "Number value over limit.\n";
    } while (Flag);
    if (Number >= 0)
    {
        long Fac = 1;
        if (Number > 0)
        {
            Cout = 1;
            while (Cout <= Number)
                Fac *= Cout++;
            cout << "\nFactorial of" << Number << "=";
            cout << Fac << endl;
        }
    }
    return (0);
}
