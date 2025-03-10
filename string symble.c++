#include<iostream>
using namespace std;
int main(){
    string s="{[]}";
    int cur=0 , sq=0 , par=0;

    for(int i=0; i< s.length();i++){
        if(s[i]=='('){
            par++;
        }

        else if(s[i]=='{'){
            cur++;
        }

        else if(s[i]=='['){
            sq++;
        }

        else if(s[i]==')'){
            par--;
        }

        else if(s[i]=='}'){
            cur--;
        }

        else if(s[i]==']'){
            sq--;
        }
    }
    if(sq==0 && cur==0 && par==0){
        cout<<"valid";
    }
    else{
        cout<<"ii";
    }
}