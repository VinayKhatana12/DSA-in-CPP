#include <iostream>
#include <queue>
using namespace std;
	int main(){
	queue<int>q;
	int size=0;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	while(!q.empty()){
		q.pop();
	size++;
	}
	cout<<"size : "<<size;
}