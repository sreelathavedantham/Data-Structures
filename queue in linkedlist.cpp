#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;	
};
class queueLinkedList
{
	node *top,*bottom;
	public:
		queueLinkedList()
		{
			top=NULL;
			bottom=NULL;
		}
		void insert(int value)
		{
			node *temp=new node;
			temp->data=value;
			temp->next=NULL;
			if(top==NULL)
			{
				top=temp;
				bottom=temp;
			}
			else
			{
				bottom->next=temp;
				bottom=temp;
			}	
		}
		void deletee()
		{
			node *temp=new node;
			temp=top;
			top=top->next;
			delete temp;
		}
		void display()
		{
			node *temp=new node;
			temp=top;
			if(top==NULL)
			{
			cout<<"queue empty";
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
		
		void queueOperations()
		{
			int value,opt;
			cout<<"\n1.insert \n2.delete"<<endl;
		
			do
			{
				cout<<"enter option";
				cin>>opt;
				if(opt==1)
				{
					cout<<"enter value";
					cin>>value;
					insert(value);
					display();
				}
				else if(opt==2)
				{
					deletee();
					display();
				}
			}
			while(opt!=0);
		}
		
};
int main()
{
	queueLinkedList q;
	q.queueOperations();	
}
