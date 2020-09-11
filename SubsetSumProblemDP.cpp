#include<iostream>
using namespace std;
bool Sum(int arr[],int n,int sum)
{
    bool sub[n+1][sum+1];
    for(int i=0;i<=n;i++)
    {
    sub[i][0]=1;
    }
    for(int i=0;i<=sum;i++)
    {
    sub[0][i]=false;
    }
    for(int i=1;i<=n;i++){
    for(int j=1;j<=sum;j++){
    sub[i][j]=sub[i-1][j];
    if(j>=arr[i-1])
    sub[i][j]=sub[i-1][j]||sub[i-1][j-arr[i-1]];}}
    return sub[n][sum];
}
int main()
{
	int arr[100],sum=15;
	int n;
	cout<<"Enter the size of array : \n";
	cin>>n;
	cout<<"Enter the array element : \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(Sum(arr,n,sum)==1)
	{
		cout<<"Sum found";
	}
	else
	{
		cout<<"Sum not found";
	}
	return 0;	
}
