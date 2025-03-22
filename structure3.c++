#include<iostream>
using namespace std;
struct demo{
    private:
    int age;
    string name;
    public:
    void integer(int a){
        age=a;
    }
    void character(char a){
        name=a; 
    }

    void show(){
        cout<<age<<" "<<name<<endl;
    }
};
int main(){
    demo a,b;
    demo *p;

    a.integer(10);
    a.character("jatin");
    a.show();

    // b.age=14;
    b.name="yash";
    b.show();

    p=&a;
    p->name="sharma";
    p->show();
}
