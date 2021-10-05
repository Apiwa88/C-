#include <iostream>
using namespace std;

int main()
{
    int income,total;
    

    cout << "Enter your income:";
    cin >> income;

    if (income<=100000 )
    {
        total= income*0.05;
    }else if (income<=500000)
    {
        total= income*0.1;
    }else if (income<=1000000)
    {
        total= income*0.2;
    }else if (income<=4000000)
    {
        total = income*0.3;
    }else if (income>=4000001)
    {
        total= income*0.37;
    }

    cout << "total is: "<< total;

}