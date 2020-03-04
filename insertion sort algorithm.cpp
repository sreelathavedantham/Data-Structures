#include<iostream>
using namespace std;
int main()
{
	int n,i,j,arr[100],temp;
	cout<<"enter n value";
	cin>>n;
	cout<<"enter"<<n<<"values";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
