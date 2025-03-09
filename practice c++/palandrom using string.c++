#include<iostream>
using namespace std;
int main(){
    string s="yash";
    int i=0;
    int j=s.length()-1;

    while(i<j){
        if(s[i]!=s[j]){
            cout<<"not a palindrom";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"palindrom";
}