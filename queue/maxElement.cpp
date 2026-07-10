#include <iostream>
#include <queue>
#include <climits>

using namespace std;
	int main(){
	queue<int>q;
	int max = INT_MIN;
	int sum=0;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	while(!q.empty()){
	    if(max<q.front()){
	        max = q.front();
		}
		  q.pop();
	}
	cout<<max;
}