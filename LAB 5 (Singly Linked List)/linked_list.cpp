#include<iostream>
using namespace std;

//	Class Node
class Node{
	private:
		int data;
		Node *nextNode;
	
	public:
		int get(){
			return data;
		}
		void set(int data){
			this->data = data;
		}
	Node * getNext(){
		return nextNode;
	}
	void setNext(Node *nextNode){
		this->nextNode = nextNode;
	}
};

class List{
	private:
		int size;
		Node *headNode;
		Node *currentNode;
		Node *lastCurrentNode;
	public:
		List();
		void add(int addObject);
		int get();
		bool next();
		friend void traverse(List list);
		friend List addNodes();
};

//	Constructor
List::List()
{
	headNode = new Node();
	headNode->setNext(NULL);
	currentNode = NULL;
	lastCurrentNode = NULL;
	size = 0;
}

//	add() class method
void List::add(int addObject){
	Node *newNode = new Node();
	newNode->set(addObject);
	if(currentNode != NULL){
		newNode->setNext(currentNode->getNext());
		currentNode->setNext(newNode);
		lastCurrentNode = currentNode;
		currentNode = newNode;
	}
	else
	{
		newNode->setNext(NULL);
		headNode->setNext(newNode);
		lastCurrentNode = headNode;
		currentNode = newNode;
	}
	size++;
}

//	get() class method
int List::get(){
	if(currentNode != NULL)
	return currentNode->get();
}

//next() class method
bool List::next()
{
	if(currentNode == NULL) return false;
	lastCurrentNode = currentNode;
	currentNode = currentNode->getNext();
	if(currentNode == NULL || size == 0) return false;
	else return true;
}

//	void remove() {
//		if(currentNode != NULL && currentNode != headNode){
//			lastCurrent->setNext()
//		}
//	}

//	friend function to traverse linkedlist
void traverse(List list){
	Node *savedCurrentNode = list.currentNode;
	list.currentNode = list.headNode;
	
	for(int i = 1; list.next(); i++){
		cout<<" \nElement "<<i<<" "<<list.get();
	}
	list.currentNode = savedCurrentNode;
}

//	friend function to add Nodes into the list
List addNodes(){
	List list;
	list.add(1);
	list.add(2);
	list.add(3);
	list.add(4);
	list.add(5);
	list.add(6);
	list.add(7);
	list.add(8);
	list.add(9);
//	list.add(10);
	
	
	cout<<" \n List size : "<<list.size<<endl;
	return list;
}


int main(){
//	Node a1;
//	a1.set(4);
//	cout<<a1.get();

	List list = addNodes();
	traverse(list);	// traversing means travel throught each element and printing on the screen
}
