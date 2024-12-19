#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int *ptr = &arr[n-1];
	
	for(int i=0; i<n; i++){
		cout<<*ptr--<<endl;
	}
	
	
	return 0;
}
