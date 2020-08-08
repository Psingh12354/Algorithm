#include<iostream>

using namespace std;
int main()
{
	int arr[100],n,i,j;
	cout<<"Enter the size of array : \n";
	cin>>n;
	cout<<"Enter element in array :\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int arr1[n];
	int dupArr=-1;
	for(i=0;i<n;i++)
	{
		int count=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				arr1[j]=dupArr;
			}
		}
	if(arr1[i]!=dupArr)
		{
		arr1[i]=count;		
		}	
	}
	for(i=0;i<n;i++)
	{
		if(arr1[i]!=dupArr)
		{
		cout<<"Duplicates value in array is "<<arr[i]<<" : "<<arr1[i]<<"\n";
		}
	}
	return 0;
}
