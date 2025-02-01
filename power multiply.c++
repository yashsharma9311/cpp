#include<iostream>
using namespace std;
int main()
{
    int base,power,ans=1;
    cout<<"enter a base value :- ";
    cin>>base;
    cout<<"enter a power value :- ";
    cin>>power;
    for(int i=1;i<=power;i++){
        ans=ans*base;
    }
    cout<<ans;
}