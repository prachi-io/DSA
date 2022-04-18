// no source and may be disconnected

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<int> adj[] , int u ,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int> adj[] , int v) {
    for(int i = 0 ; i < v ; i++) {
        cout << i << " -----> ";
        for(int j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void BFS(vector<int> adj[] , int v , int s , bool visited[]) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()) {
        int n = q.front();
        cout << n << " ";
        q.pop();
        for (int u : adj[n]) {
            if(!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }
}
void BFSDis(vector<int> adj[] , int v) {
    bool visited[v];
    for(int i = 0 ; i < v ; i++) {
        visited[i] = false;
    }
    for(int i = 0 ; i < v ; i++) {
        if(!visited[i]) {
            BFS(adj, v , i , visited);
        }
    }
}
int main() {
    int v = 7;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,4,5);
    addEdge(adj,5,6);
    addEdge(adj,4,6);
    printGraph(adj,v);
    BFSDis(adj,v);
}
