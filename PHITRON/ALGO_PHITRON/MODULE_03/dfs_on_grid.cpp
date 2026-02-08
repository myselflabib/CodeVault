#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int m, n;

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1},{0,1}};

bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
    }
    return true;
}

void dfs(int si, int sj){
    cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++){
        int ci, cj;
        
        ci = si + d[i].first;
        cj = sj + d[i].second;
        if(valid(ci, cj) && !vis[ci][cj]){
            dfs(ci, cj);
        }
    }
    
}
int main(){
    cin >> m >> n;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    int si, sj;
    cin >> si >> sj;
    dfs(si, sj);
    // for(int i = 0; i<m; i++){
    //     for(int j = 0; j<n; j++){
    //         cout <<  grid[i][j];
    //     }
    //     cout << endl;
    // }
    return 0;
}