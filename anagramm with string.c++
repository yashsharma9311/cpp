#include<iostream>
using namespace std;
int mai(){
     
    string s1="anagram";  
    string s2="aaangrm"; 

    if(s1.length() != s2.length()){ 
        cout<<"not a anagram"; 
        return 0; 
    }
    for(int i=0; i<s1.length();i++){
        bool check=false;
        for(int j=0; j<s2.length();j++){
            if(s2[i]==s1[j]){
                s1[i]='#';
                check=true;
                break;
            }
        } 
        if(check==false){
            cout<<"not a anagram";
            return 0; 
        }
    }
    cout<<"anagram"; 
}