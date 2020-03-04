//queues in data structures (first in first out)
#include<iostream>
using namespace std;
int queue[10],n=10,top=-1,i;
void insert(int value)
{	
	if(top==9)
	{
		cout<<"queue is full";
	}
	else
	{
		top++;
		queue[top]=value;
	}
}
void deletee()
{
	for(i=0;i<=top;i++)
	{
		queue[i]=queue[i+1];	
	}
		top--;	
}
void display()
{
		for(i=0;i<=top;i++)
		{
			cout<<queue[i]<<"\t";
		}
	
}
void queueOperations()
{
	int opt,value;
	cout<<" 1.insert \n 2.delete \n 3.display";
	do
	{
	cout<<"\nenter option";
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
int main()
{
	queueOperations();
	return 0;
}

