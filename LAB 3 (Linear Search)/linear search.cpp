#include<iostream>
using namespace std;
int main(){
//	searching the element from the array and print its index either -1
	int n, index = -1;
	int arr[] = {10, 20, 30, 40, 50};
	
	cout<<"Enter the element to find: ";
	cin>>n;
	int found = false;
	
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		if(arr[i]==n){
			index = i;
			found = true;
			break;
		}
	}
	
	if(found){
		cout<<"Element is found at index: "<<index;
	}
	else{
		cout<<"Element is NOT FOUND: "<<index;
	}
	return 0;
}
