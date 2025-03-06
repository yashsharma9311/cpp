#include<iostream>
using namespace std;
void sub(int a ,int b){
    cout<<a-b;
}
int main(){
    int a,b;
    cout<<"enter 2 number:- ";
    cin>>a>>b;
    sub(a,b);
}