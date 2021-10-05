#include <iostream>
using namespace std;
int main()
{
    {
        int Year;
        cout << "\nPlease enter year :";
        cin >> Year;
        if ((Year % 4) != 0)
        {
            cout << "year" << Year << "is not leap year";
        }
        else if ((Year % 400) == 0)
        {
            cout << "year" << Year << "is  leap year";
        }
        else if ((Year % 100) == 0)
        {
            cout << "year" << Year << "is not leap year";
        }
        else
        {
            cout << "year" << Year << "is  leap year";
        }

        return (0);
    }
}