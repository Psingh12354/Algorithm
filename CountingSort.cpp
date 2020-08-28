#include <iostream>
using namespace std;
void countSort(int array[], int size) {
  	int A[10];
  	int count[10];
  	int max = array[0];
  	for (int i = 1; i < size; i++) {
   		if (array[i] > max)
    		max = array[i];
  	}
  	for (int i = 0; i <= max; ++i) {
    	count[i] = 0;
  	}
  	for (int i = 0; i < size; i++) {
    	count[array[i]]++;
  	}
  	for (int i = 1; i <= max; i++) {
    	count[i] += count[i - 1];
  	}
  	for (int i = size - 1; i >= 0; i--) {
    	A[count[array[i]] - 1] = array[i];
    	count[array[i]]--;
  	}
  	for (int i = 0; i < size; i++) {
    	array[i] = A[i];
  	}	
}
	void printArray(int array[], int size) {
  		for (int i = 0; i < size; i++)
    		cout << array[i] << " ";

}
int main() {
	int n,arr[50];
	cout<<"Enter the size of array : ";
	cin>>n;
    cout<<"Enter the element in array : \n";
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	countSort(arr, n);
	printArray(arr, n);
}
