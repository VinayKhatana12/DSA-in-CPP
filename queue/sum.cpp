#include <iostream>
#include <queue>
using namespace std;
	int main(){
	queue<int>q;
	int sum=0;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	while(!q.empty()){
	    sum+=q.front();
		q.pop();
	}
	cout<<sum;
}