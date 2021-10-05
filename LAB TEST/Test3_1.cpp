#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int D = 0, M = 0, Y = 0, TD = 0;

    do
    {
        cout << "Please enter day month and year :";
        cin >> D;
        cin >> M;
        cin >> Y;
    } while (D > 30 || D<1, M> 12 || M<1, Y> 2599 || Y < 2513)

        if (D > 30 || D<1, M> 12 || M<1, Y> 2599 || Y < 2513)

    {
        cout << "Please enter day month and year :";
        cin >> D;
        cin >> M;
        cin >> Y;
    }
    else

        TD += (Y - 2513) * 12 * 30;
    TD += (M - 1) * 30;
    TD += D - 1;
    cout << "The difference is about " << TD << "days.";
}