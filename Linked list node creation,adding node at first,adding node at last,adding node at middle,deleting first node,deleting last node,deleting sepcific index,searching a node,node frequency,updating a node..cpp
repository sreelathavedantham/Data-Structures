#include<iostream>
using namespace std;
int count=0,index;
struct node                  
{
	int data;
	node *next;            
};
class LinkedList
{
	node *head,*tail;     
	public:                
	LinkedList()           
	{
	head=NULL;
	tail=NULL;
	}
 
  void createNewNode(int value)
  {
  	node *temp=new node; 
  	temp->data=value;    
  	temp->next=NULL;    
  	if(head==NULL)
  	{
  		head=temp;      
		tail=temp;        
		temp=NULL;	
		count++;
	}
	//cout<<head->data<<" "<<head->next<<"\n";  
	else
	{
		tail->next=temp;   
		tail=temp;
		count++;
	}
	//cout<<"tail node :"<<tail->data<<" "<<tail->next<<endl;
	//cout<<"head node :"<<head->data<<" "<<head->next<<"\t";
  }
   void addNodeAtFirst(int value)
  {
  	node *temp=new node;
  	temp->data=value;
  	temp->next=NULL;
  	temp->next=head;
  	head=temp;
  	count++;
  }
  void addNodeAtLast(int value)
  {
  	node *temp=new node;
  	temp->data=value;
  	temp->next=NULL;
  	tail->next=temp;
  	tail=temp;
  	count++;
  }
  void addNodeAtMiddle(int index,int value)
  {
  	if(index<=count+1)
  	{
  	int i;
  	node *current=new node;               
  	node *previous=new node;             
  	current=head;
  	for(i=1;i<index;i++)
  	{
  		previous=current;
  		current=current->next;
	}
  	node *temp=new node;
  	temp->data=value;
  	temp->next=current;
  	previous->next=temp;
  	count++;
    }
    else
    {
    		cout<<"invalid index"<<"\n";
	}
 }
  void deleteFirst()
  {
  	node *temp=new node;
  	temp=head;
  	head=head->next;
  	delete temp;
  	count--;
  }
  void deleteLast()
  {
  	int i;
	node *current=new node;
	node *previous=new node;
	current=head;
	//cout<<"count : "<<count<<"\n";
	for(i=1;i<count;i++)
	{
		previous=current;
		current=current->next;
	}
	previous->next=NULL;
	previous=tail;
	delete current;
	count--;
  }
 void deleteIndex(int index)
 {
 	int i;
  	node *x=new node;               
  	node *y=new node;             
  	node *z=new node;              
  	y=head;
  	for(i=1;i<index;i++)
  	{
  		x=y;
  		y=y->next;
	}
  	z=y->next;
  	x->next=z;
  	delete y;
  	count--;
 	
 }
 void searchNode(int search)
 {
 	int i,flag=0;
 	node *current=new node;
	current=head;
	for(i=1;i<=count;i++)
	{
		if(search==current->data)
	{
		flag=1;	
	}
	current=current->next;
	}
	if(flag==1)
	{
		cout<<"yes\n";
	}
	else
	{
		cout<<"no\n";
	}
 	
 }
 void frequencyNode(int search)
 {
 	int i,flag=0;
 	node *current=new node;
	current=head;
	for(i=1;i<=count;i++)
	{
		if(search==current->data)
	{
		flag++;	
	}
	current=current->next;
	}
    cout<<"frequency of the node is :"<<flag<<endl;
 }
 void updateNode(int search,int value)
 {
 	int i;
 	node *current=new node;
 	current=head;
 	for(i=1;i<=count;i++)
 	{
 		if(search==current->data)
 		{
 			current->data=value;
		}
		current=current->next;
	}
 }
 	
  void display()
  {
  	node *temp=new node;
  	temp=head;
  	while(temp!=NULL)
  	{
  		cout<<temp->data<<" "<<temp->next<<endl;
  		temp=temp->next;
	}
	//cout<<"number of nodes :"<<count;
  }
    
};
int main()
{
	LinkedList l;          
	l.createNewNode(90);  
	l.createNewNode(100); 
	l.createNewNode(110);
	l.addNodeAtFirst(50);
	l.addNodeAtLast(150);
	l.addNodeAtMiddle(4,110);
	l.deleteFirst();
    l.deleteLast();
    l.deleteIndex(3);
    l.searchNode(120);
    l.frequencyNode(50);
    l.updateNode(150,300);
    l.deleteFirstSearch(100);
	l.display();
	return 0;
}


