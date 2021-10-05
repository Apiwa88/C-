#include <iostream>
using namespace std;
int main()

{
    int p=20,m=30,f=50,grade; 

    for (int i = 1; i <=3; i++)
    {
        cout << "Enter Project Score : ";
    cin >> p;
    cout << "Enter Midterm Score : ";
    cin >> m;
    cout << "Enter Final Score : ";
    cin >> f;

    if (p>20 || p<0)
    {
        cout << "Error Project Score !!! " << endl ;
    }
    if (m>30 || m<0)
    {
        cout << "Error Midterm Score !!! " << endl ;
    }
    if (f>50 || m<0)
    {
        cout << "Error Final Score !!! " << endl ;
    }

    grade = p+m+f;
    cout << "total score :" << grade <<endl;

    if (grade>=0 && grade<=49)
    {
        cout << "Grade F"; 
    }
    else if (grade>=50 && grade<=59)
    {
        cout << "Grade D"; 
    }
    else if (grade>=60 && grade<=69)
    {
        cout << "Grade C"; 
    }
    else if (grade>=70 && grade<=79)
    {
        cout << "Grade B";
    }
    else
    {
        cout << "Grade A ";
    }
    }
    
}