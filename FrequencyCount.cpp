#include<iostream>

using namespace std;
void freq(int arr[],int n)
{
	for(int i=0;i<n;i++)
		arr[arr[i]%n]+=n;
	for(int i=0;i<n;i++)
	{
		if(arr[i]/n!=0)
		{
			cout<<arr[i]<<" : "<<i<<"\n";
		}
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=arr[i]%n;
	}
}
int main()
{
	int a[7]={1,2,3,5,1,6,8};
	int num=7;
	freq(a,num);
	return 0;
}
