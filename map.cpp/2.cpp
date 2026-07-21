#include<iostream>
#include<map>
using namespace std;
    int add(int n,int y){
        
    }
int main(){
    string s = "vinay";
    map<char,int> mp;
    for(char ch:s){
        mp[ch]++;
    }
    for(auto it: mp){
        cout << it.first << " " << it.second << endl;
    }
    
}