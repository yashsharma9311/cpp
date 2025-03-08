#include<iostream>
using namespace std;
string primenumber(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        return "prime number";
    }
    else{
        return "not a prime number";
    }
}
int main(){
    int num;
    cout<<"enter a number:- ";
    cin>>num;
    cout<<primenumber(num);
}