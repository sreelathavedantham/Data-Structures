#include<iostream>
using namespace std;
int arr[20],i,j,n,temp,min,l;
void bubble(int arr[6],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void selection(int arr[6],int n)
{
	for(i=0;i<n;i++)
	{
		int min,l;
		min=arr[i];
		l=i;
		for(j=i+1;j<n;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				l=j;	
			}
		}
		swap(arr[i],arr[l]);	
	}
}

	int partition(int arr[10],int start,int end)
	{
		int i,j=start;
		int pivot=arr[end];
		for(i=start;i<end;i++)
		{
		if(pivot>arr[i])
		{
			swap(arr[i],arr[j]);
			j++;
		}
		}
		swap(arr[j],arr[end]);
		return j;
	}	
void quicksort(int arr[10],int start,int end)
{
	int index;
	if(start<end)
	{
		index=partition(arr,start,end);
		quicksort(arr,start,index-1);
		quicksort(arr,index+1,end);
	}
		
}
void insertion()
{
	
}
void display(int n)
{
	//int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
void viewOptions()
{
	int opt;
	cout<<" 1.bubble sort \n 2.selection sort \n 3.quick sort \n ";
	do
	{
		cout<<"\nenter option";
		cin>>opt;
		if(opt==1)
		{
			int i,n;
			cout<<"enter n value";
			cin>>n;
			cout<<"enter"<<n<<"value";
			for(i=0;i<n;i++)
			{
				cin>>arr[i];
			}
			bubble(arr,n);
			display(n);
		}
		else if(opt==2)
		{
			cout<<"enter n value";
			cin>>n;
			cout<<"enter"<<n<<"value";
			for(i=0;i<n;i++)
			{
				cin>>arr[i];
			}
			selection(arr,n);
			display(n);
		}
		else if(opt==3)
		{
			int i,n;
			cout<<"enter n value";
			cin>>n;
			cout<<"enter\t"<<n<<"\tvalues";
			
			quicksort(arr,0,n-1);
			display(n);
		}
	
	}
	while(opt!=0);
	
}
int main()
{
	viewOptions();
	return 0;	
}
