	//------(2)-------
	//	sum of array
	
	#include<iostream>
	using namespace std;
	int main(){
		int arr[5] = {2,5,7,10,11};
		int n = sizeof(arr)/sizeof(arr[0]);
		int sum = 0;
		
		for(int i=0; i<n; i++){
			sum += arr[i];
		}
		
		cout<<"Sum of array: "<<sum;
		return 0;
	}
