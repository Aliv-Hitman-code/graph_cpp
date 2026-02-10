#include<iostream>
using namespace std;
class Dijkstra
{
	public:
	int graph[20][20],i,j,k,n,e,w;//s,d;
	char s,d;
	Dijkstra()
	{
		cout<<"Enter the number of vertices:";
		cin>>n;
		cout<<"Enter the number of edges:";
		cin>>e;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==j)
					graph[i][j]=0;
				else
					graph[i][j]=9999;
			}
		}
		
	}
	void inputCostMatrix()
	{
		int w;
		for(k=0;k<e;k++)
		{
			cout<<"\nEnter the source vertex:";
			cin>>s;
			cout<<"\nEnter the destination vertex:";
			cin>>d;
			cout<<"\nEnter the Cost:";
			cin>>w;
			graph[s-64][d-64]=w;
			graph[d-64][s-64]=w; //undirected graph
//			graph[s][d]=w;
//			graph[d][s]=w;
			
		}
	}
	void displayCostMatrix()
	{
		cout<<"\nCost Matrix is:"<<endl;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cout<<graph[i][j]<<"\t\t";
				
			}
			cout<<endl;
		}
	}
	void dijkstra(int startv)
	{
		int mindis,distance[20],prede[20],visited[20],nextv,i,j,count=0,l=1;
		for(i=1;i<=n;i++)                           // Initialize distances,visiting vertices and previous vertices
		{
			distance[i]=graph[startv][i];               // distances for each neighbor  from source vertex
			visited[i]=0;
			prede[i]=startv;
		}
		visited[startv]=1;
		count=1;
		while(count<n-1)
		{			
			mindis=9999;
			for(i=1;i<=n;i++)
			{
				if(visited[i]==0&&distance[i]<mindis)    //find the unvisited vertex with the smallest distance
				{
				    mindis=distance[i];
				    nextv=i;
				}
			}
			visited[nextv]=1;
			for(i=1;i<=n;i++)
			{
				if(visited[i]==0)
				{
					if(mindis+graph[nextv][i]<distance[i])
					{
						distance[i]=mindis+graph[nextv][i];          // Update distances for each neighbor
						prede[i]=nextv;
					}
			    }
			}
	        count++;
		}

		cout<<"\nSORTEST PATH OF ALL VERTICES FROM SOURCE "<<char(startv+64)<<endl;
		for(i=1;i<=n;i++)
		{
			if(i!=startv)
			{
		
				cout<<"\nPATH of "<<char(i+64)<<" : "<<endl; 
				cout<<char(i+64)<<" ";
				j=i;
				do
				{
					j=prede[j];
					cout<<"<- "<<char(j+64);
				}while(j!=startv);
				cout<<"\nDISTANCE OF "<<char(i+64)<<" = "<<distance[i]<<endl;
			}
		}
	}	
};
int main()
{
	Dijkstra ob;
	char s;
	ob.inputCostMatrix();
	ob.displayCostMatrix();
	cout<<"Enter the Starting Vertex:";
	cin>>s;
    ob.dijkstra(s-64);
    
}