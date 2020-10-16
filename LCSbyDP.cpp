#include<iostream>
using namespace std;
int maximum(int p,int q){
	return p>q?p:q;
}
int LCS(char *x,char *y,int m,int n)
{	
	int X[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0 or j==0)
			{
				X[i][j]=0;
			}
			else 
			if(x[i-1]==y[j-1])
			{
				X[i][j]=X[i-1][j-1]+1;
			}
			else
			{
				X[i][j]=maximum(X[i-1][j],X[i][j-1]);
			}
		}
	}
	int index=X[m][n];
	char LCS[index+1];
	LCS[index]='\0';
	int i=m,j=n;
	while(i>0 && j>0)
	{
		if(x[i-1]==y[j-1])
		{
			LCS[index-1]=x[i-1];
			i--;
			j--;
			index--;
		}
		else
		if(X[i-1][j]>X[i][j-1])
		{
			i--;
		}
		else
		{
			j--;
		}
	}
	cout<<"\nLCS String is : "<<LCS<<"\n";
	return X[m][n];
	
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
