#include <iostream>
using namespace std;

int main(){
    int graph[20][20], i, j, v, e, k, s, d, visited[20]={0}, q[10];
    cout<<"Enter the number of vertices: ";
    cin>>v;
    cout<<"Enter the number of Edges: ";
    cin>>e;

    //Create a zero matrix
    for(i=1; i<=v; i++){
        for(j=1; j<=v; j++){
            graph[i][j]=0;
        }
    }

    //Input of the Adjacecncy matrix
    for(k=0; k<e; k++){
        cout<<"Enter the starting vertex: ";
        cin>>s;
        cout<<"Enter the destination vertex: ";
        cin>>d;
        graph[s][d]=1;
        graph[d][s]=1;
    }

    //Now the new Adjacecny Matrix will be
    for(i=1; i<=v; i++){
        for(j=1; j<=v; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

    //Now Initializing the queue's value
    int front=-1, rear=-1, start;
    cout<<"Enter the starting vertex of BFS: ";
    cin>>start;

    //Enqueue start vertex
    front=rear=0;
    q[rear] = start;
    visited[start] = 1;

    //BFS Traversal
    cout<<"BFS Traversal: ";

    while(front<=rear){
        int current = q[front++];//Dequeue
        cout<<current<<" ";

        for(i=1; i<=v; i++){
            if(graph[current][i] == 1 && visited[i] == 0){
                q[++rear] = i; //Enqueue
                visited[i] = 1;
            }
        }
    }
    return 0;


}