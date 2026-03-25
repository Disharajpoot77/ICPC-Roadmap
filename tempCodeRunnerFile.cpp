#include<iostream>
using namespace std;

int main(){
	string s,t;
	cin>>s>>t;
	int count=0;
	int j=0;
	for(int i=0; i<t.size(); i++ ){

		if(s[count]==t[i]){
			count++;
		}
		
	}

	cout<<++count<<endl;

}