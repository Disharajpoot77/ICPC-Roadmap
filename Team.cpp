#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x[n],y[n],z[n];
	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i]>>z[i];
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(x[i]+y[i]+z[i]>=2){
			count++;
		}
	}
	cout<<count<<endl;

	return 0;

}