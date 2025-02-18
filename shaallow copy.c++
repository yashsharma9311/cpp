#include<iostream>
using namespace std;
class demo{
    int a;
    int *p;
    public:
    demo(){
        a=0;
        p=new int;
        *p=0;
    }
    demo(int x, int y){
        a=x;
        p= new int;
        *p=y;
    }
    public:
    void update(){
        a=a+1;
        *p=*p+1;
    }
    public:
    void show(){
        cout<<"a= "<<a<<"p= "<<*p<<endl;
    }
};
int main(){
    demo obj1(3,5);
    demo obj2(obj1);
    obj1.update();
    obj2.show();

}