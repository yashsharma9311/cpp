#include<iostream>
using namespace std;
//call by referance
int plusone(int &num){
    num=num+1;     // formal parameter
    return num;
}
int main(){
    int a=10;
    cout<<plusone(a)<<endl;  //actual parameter
    cout<<"a= "<<a;
}