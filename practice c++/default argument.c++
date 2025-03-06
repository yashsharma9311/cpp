#include<iostream>
using namespace std;
//default argument
int sum(int num1=0 ,int num2=0){
    return num1+num2;
}
int main(){
    cout<<sum();
}