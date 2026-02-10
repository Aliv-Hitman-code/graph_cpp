#include<iostream>
using namespace std;

class GraphMatrix {
public:
    int graph[21][21], graph1[21][21];
    int n, e;

    GraphMatrix() {
        cout << "Enter the number of vertices: ";
        cin >> n;
        cout << "Enter the number of edges: ";
        cin >> e;

        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                graph[i][j] = graph1[i][j] = 0;
    }

    void inputAdjacencyMatrix() {
        int s, d;
        for(int k=0;k<e;k++) {
            cout << "\nEnter the source vertex: ";
            cin >> s;
            cout << "Enter the destination vertex: ";
            cin >> d;

            graph[s][d] = 1;
            graph[d][s] = 1; // undirected
        }
    }

    void displayAdjacencyMatrix() {
        cout << "\nAdjacency Matrix:\n";
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++)
                cout << graph[i][j] << " ";
            cout << endl;
        }
    }

    void convertAdjacencyToIncidenceMatrix() {
        int edgeNo = 1;

        for(int i=1;i<=n;i++) {
            for(int j=i+1;j<=n;j++) { // avoid duplicate edges
                if(graph[i][j] == 1) {
                    graph1[i][edgeNo] = 1;
                    graph1[j][edgeNo] = 1;
                    edgeNo++;
                }
            }
        }
    }

    void displayIncidenceMatrix() {
        cout << "\nIncidence Matrix:\n";
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=e;j++)
                cout << graph1[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    GraphMatrix ob;

    ob.inputAdjacencyMatrix();
    ob.displayAdjacencyMatrix();

    ob.convertAdjacencyToIncidenceMatrix();
    ob.displayIncidenceMatrix();
}
