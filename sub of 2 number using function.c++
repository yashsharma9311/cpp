#include<iostream>
using namespace std;
void sub(int a ,int b){
    cout<<a-b;
}
int main(){
    int a,b;
    cout<<"enter 1 number:- ";
    cin>>a;
    cout<<"enter 2 number:- ";
    cin>>b;
    sub(a,b);
}