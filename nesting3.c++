#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number:-";
    cin>>num;
    if(num==1){
        cout<<"enter 2,3,4";
        cin>>num;
        if(num==2){
            cout<<"enter 3,4";
            cin>>num;
        }
        else if(num==3){
            cout<<"enter 4";
            cin>>num;
        }
        else if(num==4){
            cout<<"sucess";
        }
        else{
            cout<<"ii";
        }
    }
    else if(num==2){
        cout<<"enter 3,4";
        if(num==3){
            cout<<"enter 4";
            cin>>num;
        }
        else if (num==4){
            cout<<"sucess";
        }
        else{
            cout<<"ii";
        }
    }
    else if(num==3){
        cout<<"enter 4";
        if(num==4){
            cout<<"sucess";
        }
        else{
            cout<<"ii";
        }
    }
    else if(num==4){
        cout<<"sucess";
    }
    else{
        cout<<"ii";
        }
}