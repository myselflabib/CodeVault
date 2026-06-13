//DATE: 12/06/2026

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
    vi v(3);
    for(int i=0;i<3;i++) cin >> v[i];
    if(v[0]!=v[1] && v[0]!=v[2]) cout << v[0] << endl;
    else if(v[1]!=v[0] && v[1]!=v[2]) cout << v[1] << endl;
    else cout << v[2] << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    cout.tie(0);

    int t; cin >> t;
      
    while(t--){ 
        solve();
    }
    return 0;
}