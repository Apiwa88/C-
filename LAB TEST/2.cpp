#include <iostream> 
#include <cmath> 
using namespace std;
int main ()
{
    float circum,pi=3.14,r,area;
    double volume;
    int n=0;

    cout <<"Enter the number of radious : ";
    cin >> r;
    cout << "1.Calcuate the circumference of circle " << endl ;
    cout << "2.Calcuate the area of circle " << endl ;
    cout << "3.Calcuate the volume of phere " << endl ;

    cout << "Enter the Choice : ";
    cin >> n ;


    switch (n)
    {
    case 1 : 
        circum = 2.0*pi*r;
        cout << "circum of circle : " << circum ;
        break;
    case 2 :
        area=pi*pow(r,2);
        cout << "area of circle : "<< area ;
        break;
    case 3 :
        volume= (4.0/3.0) * pi *pow(r,3);
        cout << "Volume of circle : "<< volume ;
        break;
    
    default:
        break;
    }




}