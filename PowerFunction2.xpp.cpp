#include<iostream>
using namespace std;
int pow(int x,int y)
{
	int res=1;
	if(y==0)
	{
		return res;
	}
	else
	{
	res=res*x;
	y--;
	}
return res;
}
int main()
{
	cout<<pow(2,7);
	return 0;
}
