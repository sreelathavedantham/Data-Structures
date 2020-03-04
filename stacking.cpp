// stacking in data structures (last in first out)
#include<iostream>
using namespace std;
int stack[10],top=-1,i;
void push(int value)
{
	if(top==9)
	{
		cout<<"stack is full";
	}
	else
	{
		top++;
		stack[top]=value;
	}
}
void pop()
{
	int item;
	item=stack[top];
	top--;
	cout<<"popped element is :"<<item;
}
void peek()
{
	int item;
	item=stack[top];
	cout<<"top most element is :"<<item;
}
void display()
{
	if(top==-1)
		{
			cout<<"stack is empty";
		}
	else
	{
		for(i=top;i>=0;i--)
		{
			cout<<stack[i]<<"\t";
		}
	
	}
	
}
void stackOperations()
{
	int opt,value;
	cout<<" 1.push \n 2.pop \n 3.peek \n 4.display";
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
	}
	else if(opt==3)
	{
		peek();
	}
	}
	while(opt!=0);	
}
int main()
{
	stackOperations();
	return 0;
}
