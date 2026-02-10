#include<iostream>
using namespace std;

int main(){
    int graph[20][20], i, j, k, v, e, w;
    char s, d;
    cout<<"Enter the number of vertices: ";
    cin>>v;
    cout<<"Enter the number of edges: ";
    cin>>e;

    //Initially create a zero matrix
    for(i=1; i<=v; i++){
        for(j=1; j<=v; j++){
            graph[i][j] = 0;
        }
    }

    //Then put the values of the adjacent edges
    for(k=0; k<v; k++){
        cout<<"Enter the Starting vertex: ";
        cin>>s;
        cout<<"Enter the ending vertex: ";
        cin>>d;

        graph[s-64][d-64] = 1;
        graph[d-64][s-64] = 1;//undirected graph
    }

    //Then create the Adjacency Matrix
    cout<<"\n The Adjacency Matrix is: \n";
    for(i=1; i<=v; i++){
        for(j=1; j<=v; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}