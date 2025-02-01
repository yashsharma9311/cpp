#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number:- ";
    cin>>num;
    if((num%2==0)&&(num%3==0))
    {
        cout<<"the number is divisible by 2 & 3";
    }
    else 
    {
        cout<<"the number is not divisible by 2 & 3";
    }
    return 0;
}