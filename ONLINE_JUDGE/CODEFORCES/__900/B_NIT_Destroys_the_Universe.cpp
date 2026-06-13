//DATE: 11/06/2026

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
    if(count(all(v),0)==n){
        cout << 0 << endl;
        return;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) continue;
        if(i==n-1 or v[i+1]==0){
            count++;
        }
    }
    
    if(count==1) cout << 1 << endl;
    else cout << 2 << endl;
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