	//------(5)-------
	/*	STRUCTURE	*/
	#include<iostream>
	#include<string>
	using namespace std;
	
	struct Student{
		string name;
		int age;
		float cgpa;
	};
	
	
	int main(){
		struct Student std1, std2;
		std1.name = "Sanwal";
		std1.age = 20;
		std1.cgpa = 3.345;
		
		std2.name = "Sohail";
		std2.age = 31;
		std2.cgpa = 3.782;
		
		cout<<std1.name<<endl<<std1.age<<endl<<std1.cgpa<<endl<<endl;
		cout<<std2.name<<endl<<std1.age<<endl<<std1.cgpa<<endl;
		
		
		return 0;
	}
