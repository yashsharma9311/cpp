#include<iostream>
using namespace std;
int main(){
    int num;
    char a;
    cout<<"enter a salary";
    cin>>num;
     if(num>=10000 && num<50000){
        cout<<"enter mobile or laptop";
        cin>>num>>a;
        if(a=="mobile"){
            cout<<"20000";
        }
        else if(a=="laptop")
        {
            cout<<"30000";
            }
            else{
                cout<<"invalid";
            }
     }
     else if(num<=50000 && num>100000){
        cout<<"enter tv or fridge";
        cin>>num>>a;
        if(a=="tv"){
            cout<<"50000";
        }
        else if(a=="fridge"){
            cout<<"70000";
        }
        else{
            cout<<"invalid";
        }
     }
     else if(num<=100000 && num>=500000){
         cout<<"enter bike or car:- ";
         cin>>num>>a;
         if(a=="bike"){
             cout<<"200000";
         }
         else if(a=="car"){
             cout<<"300000";
         }
         else{
             cout<<"invalid";
         }
     }
     else{
        cout<<"invalid";
     }
}