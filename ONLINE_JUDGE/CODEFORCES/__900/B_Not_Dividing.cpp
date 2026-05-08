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
    int n; cin >> n;
    vi v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    if(v[0]==1) v[0]++;
    for(int i=1;i<n;i++){
        if(v[i]==1) v[i]++;
        if(v[i]%v[i-1]==0) v[i]++;
    }
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;
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