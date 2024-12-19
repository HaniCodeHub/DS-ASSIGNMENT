#include<iostream>
#include<vector>
using namespace std;


int main(){
	vector<int> arr;
	int n;
//	Enter the elements in vector
	for(int i=0; i<arr.size(); i++){
		cin>>n;
		arr.push_back(n);
	}
	
//	display the elements of vector
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i];
	}
	
	return 0;
}
