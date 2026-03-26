#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n; i++){
		cin>>arr[i];
	}

	sort(arr,arr+n);
	
	int sereja=0;
	int dima=0;
	
	for(int i=0; i<n; i++){
		if(i%2==0){
		sereja+=arr[i];
		}
		else{
			dima+=arr[i];
		}
	}
	
	if(sereja>dima){
		cout<<sereja<<" "<<dima<<endl;
	}
	else{
		cout<<dima<<" "<<sereja<<endl;
	}
	
	
	return 0;

}