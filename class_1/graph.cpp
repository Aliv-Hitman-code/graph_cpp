#include<iostream>
using namespace std;
int main(){

	int i, j, Graph[10][10],vertex;
	cout<<"Enter the number of the vertices: ";
	cin>>vertex;
	

	cout<<"Enter the Adjacency Matrix: "<<endl;
	for(i=1; i<=vertex; i++){
		for(j=1; j<=vertex; j++){
			cin>>Graph[i][j];
		}
	}


	cout<<"The Adjacency Matrix Graph is actually: "<<endl;
	for(i=1; i<=vertex; i++){
		for(j=1; j<=vertex; j++){
			cout<<Graph[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
