#include <iostream>
using namespace std;

class BFS
{
public:
    int graph[20][20], i, j, v, e, visited[20];
    int queue[20], front, rear;
    
    BFS()
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
            visited[i] = 0;
        }
        front = -1;
        rear = -1;
    }

    void inputAdjacecncyMatrix()
    {
        int k, s, d;
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

    void displayAdjacencyMatrix()
    {
        for (i = 1; i <= v; i++)
        {
            for (j = 1; j <= v; j++)
            {
                cout << graph[i][j] << " ";
            }
            cout << endl;
        }
    }

    void enqueue(int vertex)
    {
        if (rear == 19)
        {
            cout << "Queue is full!" << endl;
            return;
        }
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = vertex;
    }

    int dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int vertex = queue[front];
        front++;
        return vertex;
    }

    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }

    void bfsTraversal(int start)
    {
        int current;
        visited[start] = 1;
        enqueue(start);

        while (!isEmpty())
        {
            current = dequeue();
            cout << current << " ";

            for (j = 1; j <= v; j++)
            {
                if (visited[j] == 0 && graph[current][j] == 1)
                {
                    visited[j] = 1;
                    enqueue(j);
                }
            }
        }
    }
};

int main()
{
    BFS ob;
    int s, i, c = 1;
    ob.inputAdjacecncyMatrix();
    ob.displayAdjacencyMatrix();

    cout << "Enter the starting vertex: ";
    cin >> s;
    cout << "After BFS Traversal the path will be: ";
    ob.bfsTraversal(s);

    while (1)
    {
        for (i = 1; i <= ob.v; i++)
        {
            if (ob.visited[i] != 1)
            {
                break;
            }
        }
        if (i == (ob.v + 1))
        {
            break;
        }
        else
        {
            c++;
            ob.front = -1;
            ob.rear = -1;
            ob.bfsTraversal(i);
        }
    }
    cout << "\nNumber of components are: " << c << endl;
}
