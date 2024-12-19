	//------(9)-------
	/*	pointers	*/
	#include<iostream>
	using namespace std;
	int main(){
		int n = 10;
		int *ptr = &n;
		
		cout<<"Number: "<<n<<endl;
		cout<<"Address of NO: "<<ptr<<endl;
		cout<<"Dereference : "<<*ptr<<endl;
		cout<<"Address of ptr : "<<&ptr;
		
		cout<<"\n\nSize of No: "<<sizeof(n);
		cout<<"\nSize of ptr: "<<sizeof(ptr);
		cout<<"\nSize of Dereference: "<<sizeof(*ptr);
		
		cout<<endl<<endl;
		char ch = 'a';
		char *ptr2 = &ch;
		cout<<ch<<endl;
		cout<<ptr2<<endl;
		cout<<&ch<<endl;
		cout<<&ptr2<<endl;	
		
	
		return 0;
	}
