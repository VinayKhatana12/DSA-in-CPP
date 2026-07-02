#include <iostream>
using namespace std;
class Animal{
	public:
	string breed ="German";
	void eat(){
		cout <<"Animal is eating\n";
	}
};
class Dog : public Animal{
	public:
		void bark(){
			cout<<" Dog is barking\n";
	}
};
int main(){
	Dog myDog;
	myDog.bark();
	myDog.eat();
	return 0;
}