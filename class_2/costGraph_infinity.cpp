#include <iostream>
using namespace std;

int main(){
	int graph[20][20], i, j, k, v, e, s, d, w;
	cout<<"Enter the number of vertices: ";
	cin>>v;
	cout<<"Enter the number of edges: ";
	cin>>e;

	//Creating a zero matrix
	for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			if(i == j){
				graph[i][j]=0;
			}else{
				graph[i][j]=999;
			}
		}
	}

	//Creating a proper adjacency input
	for(k=0; k<e; k++){
		cout<<"\nEnter the souce vertex: ";
		cin>>s;
		cout<<"\nEnter the destination vertex: ";
		cin>>d;
		cout<<"\nEnter the weight associated to the edge: ";
		cin>>w;
		graph[s][d]=w;
		//graph[d][s]=w; For non directed graph
	}

	//Printing the cost matrix
	for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}

}
