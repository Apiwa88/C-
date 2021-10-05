#include <iostream>
using namespace std;
int main()
{
    int year,maxday;
    cout<<"\nEnter year :";
    cin>>year;
    if ((year % 4)==0){ /*Condition True*/
        cout <<"|n"<<year<<"is leap year";
        maxday = 29;   
    }
    else {/* Condition Fale*/
        cout<<"|n"<<year<<"is not leap year";
        maxday = 28;
    }
    cout <<"and Febuary has"<<maxday<<"day.\n";
    return(0);
}
