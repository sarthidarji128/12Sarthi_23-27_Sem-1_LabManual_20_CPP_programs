#include<iostream>
using namespace std;

int main()
{
    float marks[5];
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    cout << "Enter marks of subject 1: ";
    cin>>sub1;
    cout << "Enter marks of subject 2: ";
    cin>>sub2;
    cout << "Enter marks of subject 3: ";
    cin>>sub3;
    cout << "Enter marks of subject 4: ";
    cin>>sub4;
    cout << "Enter marks of subject 5: ";
    cin>>sub5;
    float average = 0;
    average=(sub1+sub2+sub3+sub4+sub5)/5;

    if(average >= 90)
    {
        cout << "Grade = A";
    }
    else if(average >= 80)
    {
        cout << "Grade = B";
    }
    else if(average >= 70)
    {
        cout << "Grade = C";
    }
    else if(average >= 60)
    {
        cout << "Grade = D";
    }
    else
    {
        cout << "Grade = F";
    }

    return 0;
}