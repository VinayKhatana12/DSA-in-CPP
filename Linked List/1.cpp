#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    public:
    Node(int data1,Node*next1){
        data =data1;
        next =next1;
    }
};
    int main (){
        vector<int> ans = {1,3,4,2 };
        Node* y = new Node(ans[0],nullptr);
        cout << y->data;

    }
    
