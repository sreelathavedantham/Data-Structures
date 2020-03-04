#include <iostream>
using namespace std;
int main()
{
	int i,j,n,arr[100],temp;
	cout<<"enter n value";
	cin>>n;
	cout<<"enter"<<n<<"values";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
		{
			cout<<arr[j]<<"-"<<arr[j+1]<<endl;
			if(arr[j]>arr[j+1])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
			
		}
			
	}
	for(j=0;j<n;j++)
	{
		cout<<arr[j]<<"\t";
	}
	
	return 0;
}
