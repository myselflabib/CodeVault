#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visit[1005];

void bfs(int src){

    queue<int> q;
    q.push(src);
    visit[src] = true;

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

    int dest, src;
    cin >> dest >> src;
    bfs(src);

    if(visit[dest]){
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
    }


    return 0;
}