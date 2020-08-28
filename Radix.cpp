#include <iostream>
using namespace std;
int getMax(int array[], int n) {
  int max = array[0];
  for (int i = 1; i < n; i++)
    if (array[i] > max)
      max = array[i];
  return max;
}
void countingSort(int array[], int size, int pos) {
  const int max = 10;
  int output[size];
  int count[max];

  for (int i = 0; i < max; ++i)
    count[i] = 0;
  for (int i = 0; i < size; i++)
    count[(array[i] / place) % 10]++;
  for (int i = 1; i < max; i++)
    count[i] += count[i - 1];
  for (int i = size - 1; i >= 0; i--) {
    output[count[(array[i] / place) % 10] - 1] = array[i];
    count[(array[i] / place) % 10]--;
  }

  for (int i = 0; i < size; i++)
    array[i] = output[i];
}
	void radixsort(int array[], int size) {
  		int max = getMax(array, size);
  		for (int pos = 1; max / pos > 0; pos *= 10)
    		countingSort(array, size, place);
	}
	void printArray(int array[], int size) {
  		for (int i = 0; i < size; i++)
    		cout << array[i] << " ";
}
int main() {
	int arr[50],n;
    cout<<"Enter the size of array : \n";
    cin>>n;
	cout<<"Enter the array element : \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	radixsort(arr, n);
	printArray(arr, n);
}
