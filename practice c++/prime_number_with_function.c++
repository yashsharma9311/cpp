#include<iostream>
using namespace std;
int primenumber(int num){
    if(num<=1){
        cout<<"not a prime number";
        return 0;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            cout<<"Not a prime number";
            return 0;
        }
    }
    cout<<"prime number";
    return 0;
}
int main(){
    int a;
    cout<<"enter a number:- ";
    cin>>a;
    cout<<primenumber(a);
}