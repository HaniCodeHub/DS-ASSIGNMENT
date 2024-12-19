	//------(3)-------
	//	reverse an array
	
	#include<iostream>
	using namespace std;
	int main(){
		int arr[5] = {1,2,3,4,5};
		// n is the total number of elements stored in array
		int n = sizeof(arr)/sizeof(arr[0]);		// n = 5		
		cout<<"Original array"<<endl;
		for(int i = 0; i<5; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		
		int i = 0, j = n-1;		// j = 4 ---> last index
		while(i>j){
			swap(arr[i], arr[j]);
			j++;
			i--;
		}
		
		for(int i = 0; i<n; i++){
			cout<<arr[i]<<" ";
		}
		return 0;
	}
