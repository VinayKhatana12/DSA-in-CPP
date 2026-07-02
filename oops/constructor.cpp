#include <iostream>
using namespace std;
class Mobile{
    public:
    int mobileNo;
    string mobileName;
    Mobile(int mobileNo,string mobileName){
        this->mobileNo = mobileNo;
        this->mobileName = mobileName;
    }
};
int main(){
    Mobile m1(123,"Samsung");
    cout<<m1.mobileName<<endl;
    cout<<m1.mobileNo<<endl;
    return 0;
}