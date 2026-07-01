#include <iostream>
using namespace std;
class Mobile{
    public:
    int mobileNo;
    string mobileName;
    Mobile(int no,string name){
        mobileNo = no;
        mobileName = name;
    }
};
int main(){
    Mobile m1(123,"Samsung");
    cout<<m1.mobileName<<endl;
    cout<<m1.mobileNo<<endl;
    return 0;
}