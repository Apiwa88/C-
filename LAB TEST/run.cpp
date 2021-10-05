#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter your number :";
    cin >> n ;
     for (int i=1; i<=n ; i++)
     {
         if (i%10==0)
         {
             cout << i <<"\n";

         }
         else{
             cout << i <<"\t";
         }
     }
}