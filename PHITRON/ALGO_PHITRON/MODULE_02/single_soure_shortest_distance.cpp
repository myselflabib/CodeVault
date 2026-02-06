#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visit[1005];
int level[1005];

void bfs(int src){

    queue<int> q;
    q.push(src);
    visit[src] = true;
    level[src] = 0;

    while(!q.empty()){
        //ber kore ana
        int par = q.front();
        q.pop();

        //oi node niye kaj kora
        // cout << par << " ";

        //child gulake queue te te push kora
        for(int child: adj_list[par]){
            if(!visit[child]){
                q.push(child);
                visit[child] = true;
                level[child] = level[par]+1;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while(e--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));

    int dest, src;
    cin >> src >> dest;
    bfs(src);

    // for(int i = 0; i < n; i++){
    //     cout << i << " -> " << level[i] << endl;
    // }

    cout << level[dest] << endl;


    return 0;
}

