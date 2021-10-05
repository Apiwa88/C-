#include <iostream>
using namespace std;
int main()
{
    int score;
    char grade;
    printf(“Enter score
           : “);
    scanf(“% d”, &score);
    clrscr();
    if (score > 100)
        grade = ‘E’;
    else if (score >= 80)
        grade = ‘A’;
    else if ((score >= 70) && (score < 80))
        grade = ‘B’;
    else if ((score >= 50) && (score < 70))
        grade = ‘C’;
    else if ((score >= 40) && (score < 50))
        grade = ‘D’;
    else
        grade = ‘E’;
    printf(“You got % cn”, grade);
    getch();
}