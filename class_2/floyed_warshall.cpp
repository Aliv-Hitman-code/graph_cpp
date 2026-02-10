#include <iostream>
using namespace std;
int main(){
	int graph[20][20], i, j, k, v, e, s, d, w;
	cout<<"Enter the number of vertices: ";
	cin>>v;
	cout<<"Enter the number of edges: ";
	cin>>e;


	//Initialise the matrix with 0 and infinity value
	for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			if(i==j){
				graph[i][j]=0;
			}else{
				graph[i][j]=999;
			}
		}
	}

	//Now Input the adjacency value with weight
	for(k=0; k<e; k++){
		cout<<"Enter the source vertex: ";
		cin>>s;
		cout<<"Enter the destination vertex: ";
		cin>>d;
		cout<<"Enter the weight of the edge associated: ";
		cin>>w;
		graph[s][d]=w;
		//graph[d][s]=w; This is for non directed graph
	}

	//Create the cost matrix
	cout<<"The cost matrix is: \n";
	for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}


	//Applying floyed warshall
	for(k=1; k<=v; k++){
		for(i=1; i<=v; i++){
			for(j=1; j<=v; j++){
				if(graph[i][j]>(graph[i][k]+graph[k][j])){
					graph[i][j]=(graph[i][k]+graph[k][j]);
				}
			}
		}
	}


	//Create the cost matrix
	cout<<"The reduced cost matrix is: \n";
        for(i=1; i<=v; i++){
                for(j=1; j<=v; j++){
                        cout<<graph[i][j]<<" ";
                }
                cout<<endl;
        }
	

}
