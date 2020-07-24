#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	if(a==b)
	{
		return b;
	}
	if(a>b)
	{
		return gcd(a-b,b);
	}
	if(b>a)
	{
		return gcd(a,b-a);
	}
}
int main()
{
	int a=60,b=24;
	cout<<"GCD of two number is : "<<gcd(a,b)<<"\n";
	return 0;
}
