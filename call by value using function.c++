#include<iostream>
using namespace std;
int plusone(int num){
    num=num+1;
    return num;
}
int main(){
    int a=10;
    cout<<plusone(a)<<endl;
    cout<<"a= "<<a;
}