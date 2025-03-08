#include<iostream>
using namespace std;
int square(int num){
    return num*num;
}
int main(){
    int num;
    cout<<"enter a number:- ";
    cin>>num;
    cout<<square(num);
}