#include <iostream>
#include <string>
using namespace std;
int main()
{
    int grade, P = 20, M = 30, F = 50;

    cout << "Plese enter score Project :" << endl;
    cin >> P;
    cout << "Plese enter score Midterm :" << endl;
    cin >> M;
    cout << "Plese enter score Final :" << endl;
    cin >> F;
    if (P > 20 || P < 0)
    {
        cout << "Error Project Score :" << endl;
    }
    if (M > 30 || M < 0)
    {
        cout << "Error Midterm Score :" << endl;
    }
    if (F > 50 || F < 0)
    {
        cout << "Error Final Score :" << endl;
    }

    grade = P + M + F;
    cout << "Total Score" << grade << endl;
    if (grade >= 80)

    {
        cout << "Grade A" << endl;
    }
    else if (grade >= 70)
    {
        cout << "Grade B" << endl;
    }
    else if (grade >= 60)
    {
        cout << "Grade C" << endl;
    }
    else if (grade >= 50)
    {
        cout << "Grade D" << endl;
    }
    else
    {
        cout << "Grade F" << endl;
    }
    return (0);
}
