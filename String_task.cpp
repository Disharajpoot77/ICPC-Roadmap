#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
    string update="";
    
	for(int i=0; i<s.size(); i++){

		if(s[i]!='a'&& s[i]!='e' && s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'&& s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U'&&s[i]!='Y'){
		  update+='.';
		  update+=s[i];
	}
	

}
 for (char &ch : update) {
   ch = tolower(ch);
    }
cout<<update;
return 0;
}