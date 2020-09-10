#include<iostream>
using namespace std;
int Partition(int *arr,int start,int end){
    int pivot=arr[end];
    int PartitionIndex=start;
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i],arr[PartitionIndex]);
            PartitionIndex++;
        }
    }
    swap(arr[PartitionIndex],arr[end]);
    return PartitionIndex;
}
void Quicksort(int *arr,int start,int end){
    if(start<end)
    {
        int PartitionIndex=Partition(arr,start,end);
        Quicksort(arr,start,PartitionIndex-1);
        Quicksort(arr,PartitionIndex+1,end);
    }
}
int main()
{
    int n,Arr[100];
    cout<<"Enter the size of array : \n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    Quicksort(Arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}
