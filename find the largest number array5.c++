#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,8,6,3,5};
    
    int ans=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    cout<<ans;
}