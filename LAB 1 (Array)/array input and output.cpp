	//------(1)---------
	/*	ARRAY	*/
	// input and output element in 1D array
	
	#include<iostream>
	using namespace std;
	int main(){
		int arr[5];	
	//	input
		cout<<"Enter the elements of array: "<<endl;
		for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
			cout<<i+1<<" : ";
			cin>>arr[i];
		}
		
	//	output
		cout<<endl<<"Your Entered array:-"<<endl;
		for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
			cout<<arr[i]<<",";
		}
		return 0;
	}
