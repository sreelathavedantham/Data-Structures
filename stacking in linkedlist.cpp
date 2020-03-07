#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class stackLinkedList
{
	node *top;
	public:
		stackLinkedList()
		{
			top=NULL;
		}
	void push(int value)
	{
		node *temp=new node;
		temp->data=value;
		temp->next=top;
		top=temp;	
			
	}
	void pop()
	{
		node *temp=new node;
		temp=top;
		top=top->next;
		delete temp;
	}
	void peek()
	{
		cout<<"top element is : "<<top->data;
	}
	void display()
	{
		node *temp=new node;
		temp=top;
		if(top==NULL)
		{
			cout<<"stack empty";
		}
		else
		{
			while(temp!=NULL)
			{
				cout<<temp->data<<"\t";
				temp=temp->next;
			}
		}
		
	}
	void stackOperations()
	{
		int value,opt;
		cout<<"1.push \n 2.pop \n 3.peek \n";
		do
		{
			cout<<"\nenter option";
			cin>>opt;
			if(opt==1)
			{
				cout<<"enter value";
				cin>>value;
				push(value);
				display();
			}
			else if(opt==2)
			{
				pop();
				display();
			}
			else if(opt==3)
			{
				peek();
			}
			
		}
		while(opt!=0);
	}	
	
};
int main()
{
	stackLinkedList s;
	s.stackOperations();
}
