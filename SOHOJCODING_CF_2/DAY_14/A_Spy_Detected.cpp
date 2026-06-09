//DATE: 09/06/2026

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
    int idx=0;
    if(v[0]!=v[1]){
        if(v[0]==v[2]) idx=1;
        else idx=0;
    }
    else{
        for(int i=2;i<n;i++){
            if(v[i-1]!=v[i]){
                idx=i;
                break;
            }
        }
    }

    cout << idx+1 << endl;
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