///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 06/12/2025   ||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve() {
    int mtx[10][10] ={{1,1,1,1,1,1,1,1,1,1},
                      {1,2,2,2,2,2,2,2,2,1},
                      {1,2,3,3,3,3,3,3,2,1},
                      {1,2,3,4,4,4,4,3,2,1},
                      {1,2,3,4,5,5,4,3,2,1},
                      {1,2,3,4,5,5,4,3,2,1},
                      {1,2,3,4,4,4,4,3,2,1},
                      {1,2,3,3,3,3,3,3,2,1},
                      {1,2,2,2,2,2,2,2,2,1},
                      {1,1,1,1,1,1,1,1,1,1}};
    char tar_mtx[10][10];
    int sum = 0;
    for(int i = 0; i<10; i++){
        for(int j =0; j<10; j++){
            cin >> tar_mtx[i][j];
            if(tar_mtx[i][j]=='X'){
            sum+=mtx[i][j];
        }
        }
    } 

    cout << sum << endl; 
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    cout.tie(0);

    int t;
    cin >> t;  
    while(t--){ 
        solve();
    }
    return 0;
}