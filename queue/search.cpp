#include <iostream>
#include <queue>
#include <climits>
using namespace std;
	int main(){
	queue<int>q;
	int target=50;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	while(!q.empty()){
		if(target==q.front()){
		cout<<"found";	
	}
	q.pop();
    }	
}