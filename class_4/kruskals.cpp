#include<iostream>
using namespace std;
class Krushkal
{
	public:
	int graph[20][20],i,j,k,n_v,e,w,parent[9]={0};//s,d;
	char s,d;
	Krushkal()
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
	void mstUsingKrushkal(int startv)
	{
		int	i,j,m,n=1,a,b,u,v,min,min_cost=0;
		cout<<"The edges of Minimum Cost Spanning Tree are:\n";
		while(n<n_v)
		{
			for(i=1,min=9999;i<=n_v;i++)
			{
				for(j=1;j<=n_v;j++)
				{
					if(graph[i][j]<min&&graph[i][j]!=0)
					{
						min=graph[i][j];
						a=i;
						u=i;
						b=j;
						v=j;
					}
				}
			}
			u=find(u);
			v=find(v);
			if(unipath(u,v))
			{
				cout<<endl<<n++<<" edge ("<<char(a+64)<<" "<<char(b+64)<<" )= "<<min<<endl;
				min_cost=min_cost+min;
			}
			graph[a][b]=9999;
			graph[b][a]=9999;
		}
		cout<<"\nMinimum cost is="<<min_cost;
	}
	int find(int i)
	{
		while(parent[i])
			i=parent[i];
		return i;
	}
	int unipath(int i,int j)
	{
		if(i!=j)
		{
			parent[j]=i;
			return 1;
		}
		return 0;
	}	
};
int main()
{
	Krushkal ob;
	char s;
	ob.inputCostMatrix();
	ob.displayCostMatrix();
	cout<<"Enter the Starting Vertex:";
	cin>>s;
    ob.mstUsingKrushkal(s-64);
    
}