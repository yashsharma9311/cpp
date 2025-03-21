#include<iostream>
using namespace std;
struct student{
    int age;
    string  name;

    void show(){
        cout<<age<<" "<<name<<" "<<endl;
    }
};
int main(){
    student s,b;
    
    student *p;

    s.age=1;
    s.name="raj";
    s.show();

    b.age=10;
    b.name="yash";
    b.show();

    p=&b;
    p->age=10;
    p->show();
    b.show();
}