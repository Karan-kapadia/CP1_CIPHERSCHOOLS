#include<bits/stdc++.h>
using namespace std;

bool cycle_recursive(vector<int> adj[], int s, bool visited[], int parent){
	visited[s] = true;
	for(int u : adj[s]){
		if(visited[u] == false){
			if(cycle_recursive(adj, u, visited, s))
				return true;
		}
		if(u != parent)
			return true;
	}
	return false;
}

bool detect_cycle(vector<int> adj[], int v){
	bool visited[v+1] = {false};
	for(int i=0; i<v; i++){
		if(visited[i] == false){
			if(cycle_recursive(adj, i, visited, -1))
				return true;
		}
		return false;
	}
}
