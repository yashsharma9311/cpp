#include<iostream>
using namespace std;
struct student{
    int roll;
    string  name;
    char gread;
};
int main(){
    student s;
    s.roll=100;
    s.name="yash";
    s.gread='A';

    cout<<s.roll<<" "<<s.name<<" "<<s.gread<<" ";
    cout<<endl;
    
    student a;
    a.roll=101;
    a.name="yash";
    a.gread='A++';

    cout<<a.roll<<" "<<a.name<<" "<<a.gread<<" ";
}