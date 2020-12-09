#include <limits.h>
#include <iostream>
using namespace std;
//defining minimum vertex from nearest node to connect
int findMinVertex(int*distance,bool*visited,int n){
	int minvertex=-1;
	for(int i=0;i<n;i++)
	{
		if(!visited[i]&&(minvertex==-1||distance[i]<distance[minvertex])){
			minvertex=i;
		}
	}
	return minvertex;
}

void dijkstra(int** edges, int n)
{
	int distance[n];
	bool* visited=new bool[n];
	for(int i=0;i<n;i++){
		distance[i] = INT_MAX;
		visited[i]=false;
	}
	distance[0]=0;
	for(int i=0;i<n-1;i++){ //i think this for loop is for number of rows
		int minVertex = findMinVertex(distance,visited,n);
		visited[minVertex]=true;
		//now as i have minvertex(row) i will now explore all its neighbours using for loop
		for(int j=0;j<n;j++){
			if(edges[minVertex][j]!=0&&!visited[j]){
				int dist=edges[minVertex][j]+edges[minVertex][j];
				if(dist<distance[j]){
					distance[j]=dist;
				}
			}
		}
	}
}
int main()
{
	int n;
	int e;
	std::cin>>n;
	cin>>e;
	int **edges = new int*[n];
	for(int i=0;i<n;i++){
		edges[i] = new int[n];
		for(int j=0;j<n;j++)
		{
			edges[i][j]=0;
		}
	}
	for(int i=0;i<e;i++)
	{
		int f,s,weight;
		cin>>f>>s>>weight;
		edges[f][s] = weight;
		edges[s][f] = weight;
	}
	cout<<endl;
	dijkstra(edges,n);
	for(int i=0;i<n;i++){
		delete []edges[i];
	}
	delete []edges;
	return 0;
}
