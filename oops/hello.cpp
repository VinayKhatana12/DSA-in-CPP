#include <iostream>
using namespace std;

class Car{
    public:
        int carNo;
        string carName;
        void display(){
            cout<<"The car no is:"<<carNo<<endl;
            cout<<"The car name is:"<<carName<<endl;
        }
    };
int main(){
    Car c1;
    c1.carNo=123;
    c1.carName="BMW";
    c1.display();
    return 0;
    }