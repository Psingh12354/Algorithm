#include<iostream>
using namespace std;
int gcd(int a,int b)
{	
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int main()
{
	int a=60,b=24;
	cout<<"GCD of a and b is : "<<gcd(a,b)<<endl;  // use abs() for negative number
	return 0;
}
