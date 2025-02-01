#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,0,3,0,4};
    int j=0;
    for(int i=0;i<6;i++){
        if(arr[1]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    for(int i=0; i<6;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}