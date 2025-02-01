#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,8,6,7};
    for(int i=0;i<5;i++){
        arr[2]=arr[0]+arr[4];
        if(arr[i]==arr[2]){
            arr[i]=arr[2];
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}