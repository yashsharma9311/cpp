#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number:-";
    cin>>num;
    if(num>0)
    {
        cout<<"the number is positive";
    }
    else if(num<0)
    {
        cout<<"the number is negative";
    }
    else{
        cout<<"the number is zero";
    }
}