///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 10/04/2026  ||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define debug(x) cout << #x << ": " << x << endl;

void solve() {
    int a, b; cin >> a >> b;
    int x, y; cin >> x >> y;
    int q, r; cin >> q >> r;

    vi dx={-a,-a,a,a,-b,-b,b,b};
    vi dy={-b,b,-b,b,-a,a,-a,a};

    set<pii> dk;
    set<pii> dq;

    for(int i=0;i<8;i++){
        dk.insert({x+dx[i], y+dy[i]});
    }
    for(int i=0;i<8;i++){
        dq.insert({q+dx[i], r+dy[i]});
    }

    int ans=0;
    for(auto p:dk){
        if(dq.find(p)!=dq.end()) ans++;
    }

    cout << ans << endl;
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

/*

*/


//TLE Eliminator problm set