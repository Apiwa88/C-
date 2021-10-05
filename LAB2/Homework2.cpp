#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int a, b, c;
    double root, ans1, ans2;

    cout << "AX^2 + BX + c = 0"<< endl;
    cout << "Enter number A : ";
    cin >> a;
    cout << "Enter number B : ";
    cin >> b;
    cout << "Enter number C : ";
    cin >> c;
    cout << endl;

    cout << "Answer of"<< a <<"X^2 + "<< b << "X +"<< c <<"=0"<< endl;

    root = (b * b - 4 * a * c);
    ans1 = (-b+ root) / (2 * a);
    ans2 = (-b - root) / (2 * a);
    cout << "Answer 1 ="<< ans1 << endl;
    cout << "Answer 2 ="<< ans2 << endl;
    return(0);

}
