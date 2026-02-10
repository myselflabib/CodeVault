#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    bool adj_mat[1005][1005];
    memset(adj_mat, 0, sizeof(adj_mat));

    while(e--){
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
    }

    int q;
    cin >> q;

    while(q--){
        int src, dest;
        cin >> src >> dest;

        if(src == dest){
            cout << "YES" << endl;
        }
        else if(adj_mat[src][dest]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}