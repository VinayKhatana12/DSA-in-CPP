#include <iostream>
using namespace std;
class Shape{
	public:
	virtual void area()=0; // pure virtual function
		};
class Rectangle : public Shape{
	private:
	int length ,breadth;
	
	public:
	Rectangle(int l, int b): length(l), breadth(b) {}
	void area(){
		cout << "Area:" << length*breadth << endl;
	}
};

class Circle: public Shape{
	private:
	float radius;
	public:
	Circle(float r): radius(r) {}
	void area(){
		cout << 3.14f*radius*radius << endl;
	}
};
int main(){
	Shape* s1 = new Rectangle(12,34);
	Shape* s2 = new Circle(5);
	s1->area();
	s2->area();
	delete s1;
	delete s2;

	}