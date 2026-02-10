#include<iostream>
using namespace std;


int main(){
	int graph[20][20], i, j, k, v, e, s, d;
	cout<<"Enter the number of vertices: ";
	cin>>v;
	cout<<"Enter the number of edges: ";
	cin>>e;


	//Filling every element of the matrix with o
	for( i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			graph[i][j]=0;
		}
	}


	//Now enter the adjacency values to create the adjacency matrix
	for(k=0; k<e; k++){
	
	cout<<"\nEnter the source vertex: ";
	cin>>s;
	cout<<"\nEnter the destination vertex: ";
	cin>>d;

	graph[s][d]=1;
	graph[d][s]=1;

	}


	//Now Print the adjacency matrix
	cout<<"The Adjacency Matrix is: "<<endl;
	for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}



}
