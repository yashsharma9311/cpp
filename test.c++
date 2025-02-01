#include<iostream>
using namespace std;
int main(){
    cout<<("seclect 1 for addition of two number\n");
    cout<<("seclect 2 for subtraction of two number\n");
    cout<<("seclect 3 for multiplication of two number\n");

    int num;
    cout<<"enter a number:- ";
    cin>>num;
    if(num==1){
        int number1,number2,sum;
        cout<<"enter first number:- ";
        cin>>number1;
        cout<<"enter second number:- ";
        cin>>number2;
        sum=number1+number2;
        cout<<sum;
    }
    else if(num==2){
        int number1,number2,sub;
        cout<<"enter first number:- ";
        cin>>number1;
        cout<<"enter second number:- ";
        cin>>number2;
        sub=number1-number2;
        cout<<sub;
    }
    else if(num==3)
    {
        int number1,number2,mul;
        cout<<"enter first number:- ";
        cin>>number1;
        cout<<"enter second number:- ";
        cin>>number2;
        mul=number1*number2;
        cout<<mul;

    }
    else {
        cout<<"invalid number";
    }
    return 0;
}