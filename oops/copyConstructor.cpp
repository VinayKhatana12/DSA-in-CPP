#include <iostream>
using namespace std;
class Number{
	public:
	int val;
	Number( int val){
		this->val = val;		
  	}
	Number(const Number &n){
		val = n.val;
	}
	void display(){
		cout<<"the value is "<<val<<endl;
	}
};
int main(){
Number s1(5);
Number s2(s1); // This will call the copy constructor
s1.display();
s2.display();
}

	