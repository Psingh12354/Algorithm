#include<iostream>
using namespace std;
int main()
{
	int i,j,n,arr[100],temp;
	cout<<"Enter the array size : \n";
	cin>>n;
	cout<<"Enter the array element : \n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"After sorting : \n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
