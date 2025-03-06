#include<iostream>
using namespace std;
// call by value
int plusone(int num){          //formal parameter
    num=num+1;
    return num;
}
int main(){
    int a=10;
    cout<<plusone(a)<<endl;    //actual parameter
    cout<<"a= "<<a;
}