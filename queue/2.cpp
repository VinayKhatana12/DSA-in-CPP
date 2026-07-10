#include <iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(15);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}