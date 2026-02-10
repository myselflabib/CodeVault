#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int n, m;

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
    }
    return true;
}

int bfs(int si, int sj){

    queue<pair<int,int>> q;
    q.push({si, sj});

    vis[si][sj] = true;
    int count = 0;

    while(!q.empty()){
        auto par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        count++;

        for(int k = 0; k < 4; k++){
            int ci = par_i + d[k].first;
            int cj = par_j + d[k].second;

            if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#'){
                vis[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }
    return count;
}

int main(){
    cin >> n >> m;
    int si, sj, bi, bj;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    vector<int> room;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '.' && !vis[i][j]){
                room.push_back(bfs(i, j));
            }
        }
    }

    if(room.size() == 0){
        cout << 0 << endl;
        return 0;
    }

    sort(room.begin(), room.end());

    for(int r: room){
        cout << r<< " ";
    }


    return 0;
}