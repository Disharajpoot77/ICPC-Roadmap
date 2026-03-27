#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	 if(s[0]>='A' && s[0]<='Z'){
	cout<<s<<endl;
	}
	else{
       char t=s[0]-32;
		 s[0]=t;
		 cout<<s<<endl;
	}
	
	return 0;

}