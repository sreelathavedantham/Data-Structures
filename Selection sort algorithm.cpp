#include<iostream>
using namespace std;
int main()
{
	int n,i,j,arr[100],min,location;
	cout<<"enter n value";
	cin>>n;
	cout<<"enter"<<n<<"values";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		min=arr[i];
		location=i;
		for(j=i+1;j<n;j++)
		{
		//	cout<<min<<"-"<<arr[j];
			if(min>arr[j])
			{
				min=arr[j];
				location=j;
			}
		}
		swap(arr[i],arr[location]);
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}

