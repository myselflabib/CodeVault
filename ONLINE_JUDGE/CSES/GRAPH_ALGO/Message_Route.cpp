#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000005];
bool visited[1000005];
int level[1000005];
int parent[1000005];

void bfs(int src){

    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty()){
        int par = q.front();
        q.pop();

        // cout << par << " ";

        for (int child : adj_list[par]){
            if (visited[child] == false){
                q.push(child);
                visited[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
}
int main(){
    int n, e;
    cin >> n >> e;

    while (e--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    bfs(1);

    if (parent[n] == -1){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        cout << level[n] + 1 << endl;
        vector<int> path;
        int node = n;
        while (node != -1){
            path.push_back(node);
            node = parent[node];
        }
        reverse(path.begin(), path.end());

        for (int x : path){
            cout << x << " ";
        }
    }

    return 0;
}