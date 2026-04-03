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
	else{
     
		int start=0;
	int end=0;
	for(int i=0; i<s.size(); i++){

	      if(s[i]=='L'){
             end=i;
	         for(int j=i; s[j]!='.'; j++){
                  start=j+1;
			   }
			   break;
		}
		else if(s[i]=='R'){
           start=i+1;
	         for(int j=i; s[j]!='.'; j++){
				if(s[j]=='L'){
		  	     start=j;
			     end=j;
			     break; 	
	        	}
          end=j+2;
	  }
			   break;
		}
		
		
	}
	cout<<start<<" "<<end;

	}
     
	

	return 0;
}