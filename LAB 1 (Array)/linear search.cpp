	//------(6)-------
	/*	SEARCHING	*/
	//	Linear search
	
	#include<iostream>
	using namespace std;
	
	int linearSearch(int arr[], int target, int size){
		for(int i=0; i<size; i++){
			if(target == arr[i]){
				return i;
			}
		}
		return -1;
	}
	
	int main(){
	//	searching the element from the array and print its index either -1
		int arr[] = {10, 20, 30, 40, 50}, target;
		int size = sizeof(arr)/sizeof(arr[0]);
		cout<<"Enter the element to find: ";
		cin>>target;	
		cout<<"Element is found at index: "<<linearSearch(arr, target, size);
		return 0;
		
	}
