#include<iostream>
using namespace std;
int main(){
	int arr[5] = {5, 7, 3, 8, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
//	finding the minimum no
	int index;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[index] > arr[j]){
				index = j;
			}
		}		
	}
	
	cout<<arr[index];
	
	
	return 0;
}
