#include<iostream>
using namespace std;
//febonaki series with function
void febo(int num){
    int fi=0,st=1,nx;
    cout<<fi<<st;
    for(int i=3;i<=num;i++){
        nx=fi+st;
        fi=st;
        st=nx;
        cout<<nx;
    }
}
int main(){
    febo(5);
}