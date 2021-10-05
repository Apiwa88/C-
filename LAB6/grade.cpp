#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string Name[16];
    int Homeroom[16];
    int Homework[16];
    int test[16];
    int Mid[16];
    int final[16];
    int Sum[16];
    char GPA[16];
    int i;
    int count = 1;

    for (int i = 1; i <= 15; i++)
    {
        cout << " No." << count << " "
             << "Enter Name: ";
        cin >> Name[i];

        cout << "Enter Room Score : ";
        cin >> Homeroom[i];
        while (Homeroom[i] < 0 || Homeroom[i] > 5)
        {
            cout << "Enter Room Score : ";
            cin >> Homeroom[i];
        }
        cout << "Enter Homework Score : ";
        cin >> Homework[i];
        while (Homework[i] < 0 || Homework[i] > 25)
        {
            cout << "Enter Homework Score : ";
            cin >> Homework[i];
        }
        cout << "Enter Test Score : ";
        cin >> test[i];
        while (test[i] < 0 || test[i] > 20)
        {
            cout << "Enter in test point : ";
            cin >> test[i];
        }
        cout << "Enter Midterm Score : ";
        cin >> Mid[i];
        while (Mid[i] < 0 || Mid[i] > 30)
        {
            cout << "Enter Midterm Score : ";
            cin >> Mid[i];
        }
        cout << "Enter Final Score : ";
        cin >> final[i];
        while (final[i] < 0 || final[i] > 30)
        {
            cout << "Enter Final Score: ";
            cin >> final[i];
        }
        Sum[i] = Homeroom[i] + Homework[i] + test[i] + Mid[i] + final[i];
        if (Sum[i] > 80)
        {
            GPA[i] = 'A';
        }
        else if (Sum[i] > 70)
        {
            GPA[i] = 'B';
        }
        else if (Sum[i] > 60)
        {
            GPA[i] = 'C';
        }
        else if (Sum[i] > 50)
        {
            GPA[i] = 'D';
        }
        else
            GPA[i] = 'F';
        count++;
    }
    cout << "Number\tName\t\tAll Score\tGrade";
    for (int i = 1; i <= 15; i++)
    {
        cout << "\n"
             << i << "\t" << Name[i] << "  ";
        cout << "\t\t" << Sum[i] << "  ";
        cout << "\t\t" << GPA[i] << "  ";
    }
}