#include<iostream>
using namespace std;
int main(){
     string s;
	 cin>>s;
	 string sub="WUB";
	//  string ans="";

	 for(int i=0; i<s.length(); i++){
        if(s.substr(i,sub.length())==sub){
			if(i==0 || s[i-1]!=' '){
              s.replace(i,sub.length()," ");
			    i--;
			}
			else{
				s.erase(i,sub.length());
				i--;
			}
		   
		}
	 }
	  if(s[0]==' '){
		s.erase(0,1); 
	 }
	cout<<s;
	 return 0;

}