#include <iostream>
using namespace std;
int main()
{
    int D = 0, M = 0, Y = 0, TD = 0;
    cout << "Please enter day month and year :";
    cin >> D;
    cin >> M;
    cin >> Y;

    TD += (Y - 2513) * 12 * 30;
    TD += (M - 1) * 30;
    TD += D - 1;

    cout << "The difference is about " << TD << "days.";
    return (0);
}