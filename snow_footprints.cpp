#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int first=s[1];
	
	if(s.size()==3 && first=='R'){
			cout<<"2"<<" "<<"3";
	}
	else if(s.size()==3 && first=='L'){
            cout<<"2"<<" "<<"1";
	}
     
	int start=0;
	int end=0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='R'){
           if(start==0){
			   start=i+1;
		   }

		   else{
			   end=i+2;
		   }
		}
       else if(s[i]=='L'){
		   if(end==0){
			   end=i;
		   }

		   else{
			   start=i+1;
		   }	
		}
		
	}
	cout<<start<<" "<<end;

	return 0;
}