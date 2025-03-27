#include<iostream>
using namespace std;
struct student{

    int roll;
    string name;
    
    private:
    char gread;

    public:
    void character(char a){
        gread=a;
    }
     
    void show(){
        cout<<roll<<" "<<name<<" "<<gread<<endl;
    }
}; 
int main(){
    student s;
    s.roll=1;
    s.name="yash";
    s.character('A');
    s.show();
}