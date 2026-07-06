#include <iostream>
#include<vector>
using namespace std;
int main(){
   /* vector<int> v;
    v.push_back(10);
    v.push_back(20);
    for(int i=0;i<v.size();i++){
        cout<< v[i] << endl;
    }*/
   int length;
   cin >> length;
   vector<int> v(length);
   for(int i=0;i<length;i++){
      cin >> v[i];
   }
   for(int i=0;i<length;i++){
     cout << v[i] << endl;
   }
   

}