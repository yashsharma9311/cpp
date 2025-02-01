#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter a percentage :- ";
    cin>>num;
    if(num<=100 && num>=80){
        cout<<"a";
    }
    else if(num>=60 && num<80){
        cout<<"b";
    }
    else if (num>=30 && num<60){
        cout<<"c";
    }
    else if(num>=0 && num<30){
        cout<<"d";
    }
    else{
        cout<<"invalid";
    }
    
    return 0;
}