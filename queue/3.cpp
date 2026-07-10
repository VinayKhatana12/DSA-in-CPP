#include <iostream>
#include <queue>
using namespace std;
int main(){
queue <int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	//cout<<q.front()<<endl;
	//cout<<q.back()<<endl;
   // cout<<q.size()<<endl;
   q.pop();
   q.pop();
   while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
   if(q.empty()){
    cout<<"Queue is empty";
   }
   else{
    cout<<"Queue is not empty";
   }
   while(!q.empty()){
	cout<<q.front();
	q.pop();
}    
}