#include<iostream>
using namespace std;
#define INFINITY 9999
void dijkstra(int arr[5][5],int n,int StartNode) {
   int cost[5][5],distance[5],pred[5];
   int visited[5],count,MinDistance,NextNode,i,j;
   for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
   		{
			if(arr[i][j]==0)
		    	cost[i][j]=INFINITY;
		    else
		        cost[i][j]=arr[i][j];
		}
	}
    for(i=0;i<n;i++) {
      distance[i]=cost[StartNode][i];
      pred[i]=StartNode;
      visited[i]=0;
   }
   distance[StartNode]=0;
   visited[StartNode]=1;
   count=1;
   while(count<n-1) {
      	MinDistance=INFINITY;
      	for(i=0;i<n;i++)
        {
        	if(distance[i]<MinDistance&&!visited[i]) {
        	MinDistance=distance[i];
         	NextNode=i;}
    	}
        visited[NextNode]=1;
        for(i=0;i<n;i++)
			if(!visited[i])
		if(MinDistance+cost[NextNode][i]<distance[i]) {
         distance[i]=MinDistance+cost[NextNode][i];
         pred[i]=NextNode;
    }
      count++;
    }
    for(i=0;i<n;i++)
    if(i!=StartNode) {
    	cout<<"\nDistance node"<<i<<" = " <<distance[i];
        cout<<"\nPath = "<<i;
        j=i;
        do {
        	j=pred[j];
         	cout<<" <--> "<<j;
        }
		while(j!=StartNode);
   }
}
int main() {
	int arr[5][5]={{0,1,0,3,10},{1,0,5,0,0},{0,5,0,2,1},{3,0,2,0,6},{10,0,1,6,0}};
    int n;
	int u;
	cout<<"Enter number of nodes :-> ";
	cin>>n;
	cout<<"\nInitial node :-> ";
	cin>>u;
	dijkstra(arr,n,u);
	return 0;
}
