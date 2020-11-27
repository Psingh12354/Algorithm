#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int x,y,a,b;
	cin>>a>>b;
	vector <int> AdjList[a];
	vector <int> Indegree(a,0);
	queue <int> Queue;
	int VisitNodes=0;
	for(int i=0;i<b;i++)
	{
		cin>>x>>y;
		Indegree[y]++;
		AdjList[x].push_back(y);
	}
	for(int i=0;i<a;i++)
	{
		if(Indegree[i]==0) 
		{
			Queue.push(i);
		}
	}
	while(!Queue.empty())
	{
		VisitNodes++;
		for(auto x:AdjList[Queue.front()])
		{
			Indegree[x]--;
			if(Indegree[x]==0)
			{
				Queue.push(x);
			}
		}
		cout<<Queue.front()<<" ";
		Queue.pop();
	}
	if(VisitNodes!=a)
	{
		cout<<"There is a cycle!";
	}
	
}

