#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,1};
    int i=0;
    int j=3;

    while(i<j){
        if(arr[i]!=arr[j]){
            cout<<"no a palindrom";
            return 0;
        }
        i++;
        j--;
    }

    cout<<"palindrom";
}