#include <iostream>
using namespace std;

class DFS
{
public:
    int graph[20][20], i, j, v, e, visited[20];
    DFS()
    {
        cout << "Enter the number of Vertices: ";
        cin >> v;
        cout << "Enter the number of Edges: ";
        cin >> e;
        // Create a zero matrix
        for (i = 1; i <= v; i++)
        {
            for (j = 1; j <= v; j++)
            {
                graph[i][j] = 0;
            }
            visited[i]=0;
        }
    }

    void inputAdjacecncyMatrix(){
        int k,s,d;
        for (k = 0; k < e; k++)
        {
            cout << "Enter the starting vertex: ";
            cin >> s;
            cout << "Enter the destination vertex: ";
            cin >> d;
            graph[s][d] = 1;
            graph[d][s] = 1;
        }
    }

    void displayAdjacencyMatrix(){
        for(i=1; i<=v; i++){
            for(j=1; j<=v; j++){
                cout<<graph[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void dfsTraversal(int i){
        int j;
        cout<<i<<" ";
        visited[i]=1;
        for(j=1; j<=v; j++){
            if(visited[j]==0 && graph[i][j]==1){
                dfsTraversal(j);
            }
        }
    }
};

int main(){
    DFS ob;
    int s, i, c=1;
    ob.inputAdjacecncyMatrix();
    ob.displayAdjacencyMatrix();

    cout<<"Enter the starting vertex: ";
    cin>>s;
    cout<<"After DFS Traversal the path will be: ";
    ob.dfsTraversal(s);

    while(1){
        for (i = 1; i <= ob.v; i++)
        {
            if (ob.visited[i]!=1)
            {
                break;
            }
            
        }
        if (i==(ob.v+1))
        {
            break;
        }
        else{
            c++;
            ob.dfsTraversal(i);
        }
        
        
    }
    cout<<"\n Number of components are: "<<c<<endl;
}