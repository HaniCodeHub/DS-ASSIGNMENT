	//------(8)-------
	/*	STACK	*/
	// stack implementation using array
	#include<iostream>
	using namespace std;
	int stack[100], top=-1;		// Global
	
	//	push fuction
	void push(int value){
		if(top>99){
			cout<<"Stack is overflow";
		}
		else{
			top++;
			stack[top]=value;
		}
	}
	
	// pop function
	void pop(){
		if(top<0){
			cout<<"Stack is underflow";
		}
		else{
			cout<<"Poped element: "<<stack[top]<<endl;
			top--;
		}
	}
	void Display(){
		if(top>-1){
			for(int i=0; i<=top; i++){
				cout<<stack[i]<<endl;
			}
		}
		else
			cout<<"Stack is underflow";
		return;
	}
	int main(){
		int choice, value;
		
		while(true){
			cout<<"\n 1: push\n 2: pop\n 3: Display\n 4: Exit\n Enter\n"<<endl;
			cin>>choice;
			switch(choice){
				case 1:
				cout<<"Enter element: ";
				cin>>value;
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				Display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"INVALID";
			}
		}
		return 0;
	}

