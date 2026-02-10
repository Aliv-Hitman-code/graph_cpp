#include<iostream>
using namespace std;
class Prims
{
	public:
	int graph[20][20],i,j,k,n_v,e,w;//s,d;
	char s,d;
	Prims()
	{
		cout<<"Enter the number of vertices:";
		cin>>n_v;
		cout<<"Enter the number of edges:";
		cin>>e;
		for(i=1;i<=n_v;i++)
		{
			for(j=1;j<=n_v;j++)
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
		for(i=1;i<=n_v;i++)
		{
			for(j=1;j<=n_v;j++)
			{
				cout<<graph[i][j]<<"   ";
				
			}
			cout<<endl;
		}
	}
	void mstUsingPrims(int startv)
	{
		int	i,j,m,n=1,a,b,u,v,min,min_cost=0,visited[7]={0};
		m=startv;
		visited[m]=1;
		printf("\nEdges of minimum cost spanning tree\n");
		while(n<n_v)
		{
			for(i=1,min=9999;i<=n_v;i++)
			{
				if(visited[i]==1)
				{
				    for(j=1;j<=n_v;j++)
				    {
					   if(visited[j]!=1)
					    {
						   if(graph[i][j]<min)
					        {
							  min=graph[i][j];
							  a=i;
						      b=j;
						    }
					    }
				    }
			    }
			}
			visited[b]=1;
			//printf("%d edge (%c %c)=%d\n",n++,(a+64),(b+64),min);
			cout<<endl<<n++<<" edge ("<<char(a+64)<<" "<<char(b+64)<<" )= "<<min<<endl;
			min_cost=min_cost+min;
			graph[a][b]=9999;
			graph[b][a]=9999;
		}
		//printf("\nMinimum cost is=%d",min_cost);
		cout<<"\nMinimum Cost is ="<<min_cost;
	}	
};
int main()
{
	Prims ob;
	char s;
	ob.inputCostMatrix();
	ob.displayCostMatrix();
	cout<<"Enter the Starting Vertex:";
	cin>>s;
    ob.mstUsingPrims(s-64);
    
}