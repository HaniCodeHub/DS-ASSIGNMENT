#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define SIZE 10
struct link
{
	int info;
	int next;
};
struct link node[SIZE];
int Getnode();
void Createlist();
void Freenode(int);
void Display();
void Insert(int,int);
void Delete(int);
int p, avail=0;
int main()
{
	int ch=1,i,n,x;
	
	// Creation of available list
	for (i=0;i<SIZE-1;i++)
	node[i].next=i+1;
	node[SIZE-1].next=-1;
	printf("\n  Create a List: ");
	Createlist();
	while(ch!=4)
	{
		printf("\n1-DISPLAY");
		printf("\n2-INSERT");
		printf("\n3-DELETE");
		printf("\n4-Out");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				Display();
				break;
			case 2:
				printf("\n Node insertio:after which node:");
				scanf("%d",&n);
				p=n;
				printf("\n Enter the item for insertion:");
				scanf("%d",&x);
				Insert(p,x);
				break;
			case 3:
				printf("\n Enter the node after which the node will be delete:");
				scanf("%d",&n);
				p=n;
				Delete(p);
				break;
			default:
				printf("Wrong choice! Try again:");
				
		}
		
	}
}
int Getnode()
{
	if (avail==-1)
	{
		printf("\n Overflow:");
		//exit(0);
	}
	p = avail;
	avail = node[avail].next;
	return p;
}
void Freenode(int q)
{
	node[q].next=avail;
	avail=q;
	return;
}
void Createlist()
{
	int x;
	char c;
	p = Getnode();
	printf("\n Enter an item to be inserted:");
	scanf("%d",&x);
	node[p].info=x;
	node[p].next=-1;
	while(TRUE)
	{
		printf("\n Enter the choice(y/n):");
		fflush(stdin);
		c=getchar();
		if(c=='y'||c=='Y')
		{
			printf("\n Enter an item to be inserted:");
			scanf("%d",&x);
			Insert(p,x);
			node[p].next=-1;
		}
		else
			return;
	}
}
void Display()
{
	p=0;
	while(node[p].next!=-1)
	{
		printf("\n%d\t%d\t%d:",p,node[p].info,node[p].next);
		p=node[p].next;
	}
	printf("\n%d\t%d\t%d:",p,node[p].info,node[p].next);
}
void Insert(int r, int x)
{
	int q;
	if(r==-1)
	{
		printf("\n void insertion:");
		return;
	}
}
