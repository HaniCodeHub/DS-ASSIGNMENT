#include<iostream>
using namespace std;
class node{
public:
int data; 
node *next;
node(int val){
data = val;
next = NULL;
}
};
//This function inserts a new node at the end of the linked list.
// node* &head: A reference to a pointer to the first node (head) of the linked list.
// INSERT ELEMENT AT LAST
void insertNodeatEnd(node* &head, int val)
{
node* n = new node(val);
node* temp = head;
if(head==NULL)
{
head = n;
return;
}
while(temp->next != NULL)
{
temp = temp->next; }
temp->next=n;
}
// INSERT ELEMENT AT HEAD
void insertatStart(node* &head, int val)
{
node* n = new node(val);
if(head == NULL)
{
head = n;
return;
}
else{
// put code here
}
}
// TRAVERSING A LINKED LIST
void display (node* head)
{
node* temp = head;
while(temp!= NULL)
{
cout<<temp->data<<" ";
temp = temp->next;
}
cout<<endl;
}
int main(){
node* head = NULL;
// insertatStart(head, 10);
insertNodeatEnd(head, 3);
insertNodeatEnd(head, 37);
insertNodeatEnd(head, 4);
insertNodeatEnd(head, 12);
insertatStart(head, 10);
deletenodeatstart(head, 10);
display(head);
}
}
// TRAVERSING A LINKED LIST
void display (node* head)
{
node* temp = head;
while(temp!= NULL)
{
cout<<temp->data<<" ";
temp = temp->next;
}
cout<<endl;
}
int main(){
node* head = NULL;
// insertatStart(head, 10);
insertNodeatEnd(head, 3);
insertNodeatEnd(head, 37);
insertNodeatEnd(head, 4);
insertNodeatEnd(head, 12);
insertatStart(head, 10);
deletenodeatstart(head, 10);
display(head);
}
