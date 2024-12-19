	//------(7)-------
	/*	SORTING	*/
	//	Selection sort
	
	#include<iostream>
	using namespace std;
	int main(){
		int arr[5];
		int n = sizeof(arr)/sizeof(arr[0]);
		
	//	Enter the elements of array
		cout<<"Enter the elements of array"<<endl;
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
	//	Printing the elements of array
		cout<<"Unsorted array: "<<endl;
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}	
	//	Selection sort
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(arr[i]>arr[j]){
					swap(arr[i], arr[j]);
				}
			}
		}
	//	printing the sorted array
		cout<<endl;
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}
		return 0;
	}
