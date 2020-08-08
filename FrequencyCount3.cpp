#include <iostream>
using namespace std;
int main()
{
	int A[] = { 2, 3, 3, 2, 1 };
	int n=5;
	for (int i = 0; i < n; i++)
		A[A[i] % n] += n;
	for (int i = 0; i < n; i++)
		if (A[i]/n != 0)
			cout<<"Element"<<i<<" appeared : "<<A[i]/n<<"\n";
	for (int i = 0; i < n; i++)
		  A[i] = A[i] % n;
	return 0;
}
