	//------(4)-------
	//	2D ARRAY(input and output)
	
	#include<iostream>
	using namespace std;
	int main(){
		
		int arr[3][3];
	//	input
		cout<<"Enter elements of array: "<<endl;
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cin>>arr[i][j];
			}
		}
	//	output
		cout<<"Entered elements"<<endl;
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		return 0;
	}
