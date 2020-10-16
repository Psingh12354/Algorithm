#include<iostream>
using namespace std;
int maximum(int p,int q){
	return p>q?p:q;
}
int LCS(char *x,char *y,int m,int n)
{
	if(m==0 or n==0)
	{
		return false;
	}
	if(x[m-1]==y[n-1])
	{
		return (1+LCS(x,y,m-1,n-1));
	}
	else
	{
		return maximum(LCS(x,y,m,n-1),LCS(x,y,m-1,n));
	}
}
int main(){
	int p,q;
	cout<<"Enter the size of first and second input : \n";
	cin>>p>>q;
	char X[p];
	char Y[q];
	cout<<"Enter the element in LCS : \n";
	cin>>X>>Y;
	cout<<"Length of LCS is : "<<LCS(X,Y,p,q);
	return 0;
}
