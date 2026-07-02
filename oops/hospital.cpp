#include <iostream>
using namespace std;
class Hospital{
	public:
	string patientName;
	int patientId;
	string disease;
	Hospital(string a , int b , string c){
		 patientName=a;
		 patientId=b;
		 disease=c;			
  	}
};
int main(){
Hospital myobj("Vinay",69302,"wrist");
cout<<"Patient Name:"<<myobj.patientName<<endl;
cout<<"Patient Id:"<<myobj.patientId<<endl;
cout<<"Patient disease:"<<myobj.disease<<endl;
return 0;
}

	