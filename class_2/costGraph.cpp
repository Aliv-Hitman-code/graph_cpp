#include <iostream>
using namespace std;

int main(){
	int graph[20][20], i, j, v, e, s, d, w, k;
	cout<<"Enter the number of vertices in the graph: ";
	cin>>v;
	cout<<"Enter the number of edges in the graph: ";
	cin>>e;

	//Creating the graph with all element 0
	for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			graph[i][j]=0;
		}
	}

	//Now getting the values for the adjacent elements
	for(k=0; k<e; k++){
		cout<<"\nEnter the source vertex: ";
		cin>>s;
		cout<<"\nEnter the destination vertex: ";
		cin>>d;
		cout<<"\nEnter the weight associated to the edge: ";
		cin>>w;
		graph[s][d]=w;
		//grpah[s][d]=w; This is only for undirected graph
	}

	//Now we need to print out the adjacency matrix finally
	for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}
}
