#include<iostream> 
using namespace std;
class grandparent{
    public:
    virtual void show(){
        cout<<"grandparent";
    }
};
class parent:virtual grandparent{
    public:
    virtual void show(){
        cout<<"parent";
    }
};
class child:virtual public parent,virtual public grandparent{
    public:
    virtual void show(){
        cout<<"child";
    }
};
int main(){
    grandparent *obj;
    parent obj;
    obj1=&obj;
    obj1->dhow();
}