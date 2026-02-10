#include <iostream>
using namespace std;

int main(){
	int graph[20][20], i, j, k, s, d, v, e;
	cout<<"Enter the number of vertices: ";
	cin>>v;
	cout<<"Enter the number of edges: ";
	cin>>e;

	//Create a zero matrix
	for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			graph[i][j]=0;
		}
	}

	//Enter adjacency value
	for(k=0; k<e; k++){
		cout<<"Enter the source vertex: ";
		cin>>s;
		cout<<"Enter the destination vertex: ";
		cin>>d;
		graph[s][d]=1;
	}

	//Adjacecncy Matrix
	cout<<"\n Adjacency Matrix \n";
	for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}

	//Apply warshall
	for(k=1; k<=v; k++){
		for(i=1; i<=v; i++){
			for(j=1; j<=v; j++){
				graph[i][j]= graph[i][j] | (graph[i][k] & graph[k][j]); 
			}
		}
	}

	//Adjacecncy Matrix
        cout<<"\n Adjacency Matrix \n";
        for(i=1; i<=v; i++){
                for(j=1; j<=v; j++){
                        cout<<graph[i][j]<<" ";
                }
                cout<<endl;
        }
	
}

