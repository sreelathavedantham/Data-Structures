#include<iostream>
using namespace std;

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
	if(start<end)
	{
		int j=partition(arr,start,end);
		quicksort(arr,start,j-1);
		quicksort(arr,j+1,end);
	}	
}
int main()
{
	int i;
	int arr[10]={23,67,34,12,90,55,45};
	quicksort(arr,0,6);
	for(i=0;i<7;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
