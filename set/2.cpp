#include <iostream>
#include <set>
using namespace std;
int main(){
    int arr[]={1,1,2,3,4,5,5,6};
    set<int>s;
    for(int i:arr){
        s.insert(i);
    }
    for(auto it:s){
        cout<<it<<endl;
    }
}