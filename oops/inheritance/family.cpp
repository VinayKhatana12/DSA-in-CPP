#include <iostream>
using namespace std;
class Father{
	public:
	string assets;
    int bankBalance;
	void drive(){
		cout <<"Driving\n";
	}
    Father(string assets, int bankBalance){
        this->assets = assets;
        this->bankBalance = bankBalance;
    }

};
class Son : public Father{
	public:
		Son(string assets, int bankBalance) : Father(assets, bankBalance) {}
	};
int main(){
	Son mySon("house", 200000);
	mySon.assets;
	mySon.bankBalance;
	mySon.drive();
	return 0;
}