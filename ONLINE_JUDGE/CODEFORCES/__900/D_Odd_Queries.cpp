//DATE: 08/05/2026

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
    int n, q; cin >> n >> q;
    vi v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    vi pre(n); pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i]=v[i]+pre[i-1];
    }

    // for(int i=0;i<n;i++) cout << pre[i] << " ";

    while(q--){
        int l, r, k; cin >> l >> r >>k;
        
        ll os=pre[r-1]-(l>1?pre[l-2]:0);
        ll ns=(sum-os)+((r-l)+1)*k;

        if(ns%2==0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
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