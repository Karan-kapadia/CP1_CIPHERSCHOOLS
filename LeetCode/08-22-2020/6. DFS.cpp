#include<bits/stdc++.h>
using namespace std;

void DFS_Recurssive(vector<int> adj[], int s, bool visited[]){
	visited[s] = true;
	cout << s << " ";
	for(int u : adj[s]){
		if(visited[u] == false)
			DFS_Recurssive(adj, s, visited);
	}
}

void DFS(vector<int> adj[], int v, int s){
	bool visited[v+1] = {false};
	DFS_Recurssive(adj, s, visited);	
}
