#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;
    int arr[] = {1,1,2,2,3,4,5};
    for(int i : arr){
        mp[i]++;
    }

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
}
