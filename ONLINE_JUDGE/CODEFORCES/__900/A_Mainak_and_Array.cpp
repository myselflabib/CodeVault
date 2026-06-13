//DATE: 10/06/2026

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
    int n; cin >> n;
    vi v(n);
    for(int i=0;i<n;i++) cin >> v[i];

    int ans=v[n-1]-v[0];
    for(int i=1;i<n;i++)ans= max(ans, v[i]-v[0]);
    for(int i=0;i<n-1;i++)ans= max(ans, v[n-1]-v[i]);
    for(int i=0;i<n-1;i++)ans= max(ans, v[i]-v[i+1]);
    
    cout << ans << endl;
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