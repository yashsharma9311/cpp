#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,8,6,7};
    for(int i=0;i<5;i++){
        int a=arr[1];
         arr[1]=arr[3];
         arr[3]=a;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}