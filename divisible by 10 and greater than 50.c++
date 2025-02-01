#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number :-";
    cin>>num;
    if((num%10==0)&&(num>=50))
    {
        cout<<"the number is divisible by 10 and greater then 50";
    }
    else if  ((num%10==0)&&(num<50))
    {
        cout<<"the number is divisible by 10 but not greater then 50";
    }
    else
    {
        cout<<"the number is not divisible by 10";
    }
    return 0;
}