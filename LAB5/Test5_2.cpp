#include <iostream>
using namespace std;
int main()
{
    int grade;
    char total;
    cout << "Enter score : ";
    cin >> grade;

    grade >= 80
        ? total = 'A'
    : (grade >= 70)
        ? total = 'B'
    : (grade >= 60)
        ? total = 'C'
    : (grade >= 50)
        ? total = 'D'
        : total = 'F';

    cout << "Grade : " << total << endl;
    return (0);
}