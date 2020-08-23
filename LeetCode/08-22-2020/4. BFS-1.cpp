#incude<bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj[], int v, int s){
	bool visited[v+1] = {false};
	queue<int> q;
	visited[s] = true;
	q.push(s);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		cout << u << " ";
		for(int v : adj[u]){
			if(visited[v] == false){
				visited[v] = true;
				q.push(v);
			}
		}
	}
}
