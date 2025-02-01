#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number :- ";
    cin>>num;

    if((num>=10)&&(num<=20))
    {
        cout<<"the number is between 10 and 20";
    }
    else
    {
        cout<<"the number is less then 10 or greater then 20";
    }
}