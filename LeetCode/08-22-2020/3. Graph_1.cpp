#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printEdge(vector<int> adj[], int v){
	for(int i=0; i<v; i++){
		cout << i << " ---> ";
		for(int j=0; j<adj[i].size(); j++)
			cout << adj[i][j] << " ";
		cout << "\n";
	}
}
int main(){
	int v = 4;
	vector<int> adj[5];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);
	addEdge(adj, 2, 3);
	printEdge(adj, v);
	return 0;
}
