//recursion
//function calling itself
//print factorial number using function (recursion)
#include<iostream>
using namespace std;
int number(int n){
    if(n==1){
        return n;     
    }
     return n*number(n-1);
}
int main(){
    cout<<number(5);
}