#include<iostream>
using namespace std;
bool Sum(int arr[],int n,int sum)
{
	if(sum==0)
	{
		return true;
	}
	if(sum!=0 && n==0)
	{
		return false;
	}
	if(arr[n-1]>sum)
	{
		return Sum(arr,n-1,sum);
	}
	return Sum(arr,n-1,sum) || Sum(arr,n-1,sum-arr[n-1])
}
int main()
{
	int arr[100],sum=9;
	int n;
	cout<<"Enter the size of array : \n";
	cin>>n;
	cout<<"Enter the array element : \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(Sum(arr,n,sum)==true)
	{
		cout<<"Element found with given sum\n";
	}
	else
	{
		cout<<"No element found";
	}
	return 0;	
}
