#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    string s1="listen";
    string s2="liseen";

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1==s2){
        cout<<"anagram";
    }
    else{
        cout<<"not a anagram";
    }
    return 0;
}