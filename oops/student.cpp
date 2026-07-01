#include <iostream>
using namespace std;
class Student1{
    public:
        int rollNo;
        string name;
        void display(){
            cout<<"The roll no is:"<<rollNo<<endl;
            cout<<"The name is:"<<name<<endl;
        }
};

int main(){
    Student1 s1,s2;
    s1.rollNo = 101;
    s1.name = "John";
    s1.display();
    s2.rollNo = 12;
    s2.name="aryan";
    s2.display();

    return 0;
}