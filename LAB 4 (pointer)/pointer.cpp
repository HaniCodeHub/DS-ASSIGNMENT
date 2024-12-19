#include<iostream>
using namespace std;
int main(){
	int n; 
	cout<<"Enter a value: ";
	cin>>n;
	
	int *ptr = &n;
	cout<<"\nValue of no: "<<n<<endl;
	cout<<"Address of n: "<<ptr;
	
	return 0;
}
