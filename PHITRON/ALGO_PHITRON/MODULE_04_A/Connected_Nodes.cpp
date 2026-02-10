#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<int> adj[n];
    for (int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--){
        int x;
        cin >> x;

        if(adj[x].empty()){
            cout << -1 << endl;
        }

        else{
            sort(adj[x].begin(), adj[x].end(), greater<int>());

            for (int child : adj[x]){
                cout << child << " ";
            }
            cout << endl;
        }
    }

    return 0;
}