#include<iostream>
using namespace std;
int pow(int x,int y)
{
	int res=1;
	while(y>0)
	{
		if(y%2!=0)
		{
		res*=x;
		y--;
		}
		else
		{
			y=y/2;
			x=x*x;
		}	
	}
	return res;
}
int main()
{

	cout<<pow(2,7);
	return 0;
}
