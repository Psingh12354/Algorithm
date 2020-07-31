#include<iostream>
using namespace std;
int pow(int x,int y)
{
	int res=1;
	while(y!=0)
	{
	res*=x;
	--y;
	}
	return res;
}
int main()
{
	cout<<pow(2,8);
	return 0;
}
