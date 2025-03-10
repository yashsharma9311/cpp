#include<iostream>
using namespace std;
int main(){
    string s="AbCd";
    for(int i=0; i<s.length();i++){
        if(int(s[i])>=65 && int(s[i])<=90){
            s[i]=int(s[i]+32);
        }
        else if(int(s[i])>=97 && int(s[i])<=122){
            s[i]=int(s[i]-32);
        }
    }
    cout<<s;
}