#include<bits/stdc++.h>
using namespace std;

bool directed_cycle_dfs(vector<int> adj[], int s, bool visited[], bool recursion_stack[]){
	visited[s] = true;
	recursion_stack[s] = true;
	
	for(int u : adj[s]){
		if(visited[u] == false && directed_cycle_dfs(adj, u, visited, recursion_stack) == true)
			return true;
		else if(recursion_stack[u] == true)
			return true;
	}
	recursion_stack[s] = false;
	return false;
}

bool detect_cycle(vector<int> adj[], int v){
	bool visited[v+1] = {false};
	bool recursion_stack[v+1] = {false};
	
	for(int i=0; i<v; i++){
		if(visited[i] == false){
			if(directed_cycle_dfs(adj, i, visited, recursion_stack))
				return true
		}
	}
	return false;
}
