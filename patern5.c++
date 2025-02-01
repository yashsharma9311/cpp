#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=9;c++){
        if(c>=r && c<=10-r){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
        cout<<endl;
    }
}