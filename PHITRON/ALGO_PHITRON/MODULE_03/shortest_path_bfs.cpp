#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int level[105][105];
int m, n;

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1},{0,1}};

bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
    }
    return true;
}

void bfs(int ci, int cj){
    queue<pair<int, int>> q;
    q.push({ci, cj});
    vis[ci][cj] = true;
    level[ci][cj] = 0;
    while(!q.empty()){
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        // cout << par_i << " " << par_j << endl;
        for(int i = 0; i<4; i++){
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;

            if(valid(ci, cj) && !vis[ci][cj]){
                q.push({ci, cj});
                vis[ci][cj]=true;
                level[ci][cj] = level[par_i][par_j]+1;
            }
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
    memset(level, 0, sizeof(level));

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    bfs(si, sj);

    cout << level[di][dj] << endl;
    // for(int i = 0; i<m; i++){
    //     for(int j = 0; j<n; j++){
    //         cout <<  grid[i][j];
    //     }
    //     cout << endl;
    // }
    return 0;
}