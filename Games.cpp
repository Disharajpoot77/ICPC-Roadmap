#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int x[n],y[n];
	for(int i=0; i<n; i++){
		cin>>x[i]>>y[i];
	}

	int i=0;
	int j=i+1;
	int count=0;
	int start=0;
	while(i<n && start<2){
		// cout<<"i"<<i<<endl;
		// cout<<"j"<<j<<endl;
	if(start!=1){	
		if(j!=n && x[i]==y[j] && x[i]!=x[j]){
			count++;
			j++;
		}
		else if(j==n){
			i++;
			j=i+1;
		}
		else if(j<n){
			j++;
		}
		
	   if(i==n-1 && j==n){
           start++;
		   i=0;
		   j=i+1;
		}
	}
		// cout<<start<<endl;
		
      
else{
	  if(j!=n && y[i]==x[j] && y[i]!=y[j]){
			count++;
			j++;
	      }
		else if(j==n){
			i++;
			j=i+1;
		}
		else{
			j++;
		}
		
		 if(i==n-1 && j==n){
           start++;
		}
	
	}
}

	cout<<count;
	return 0;


}