//DATE: 08/06/2026

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
    vi v(4);
    for(int i=0;i<4;i++) cin >> v[i];
    int count=0;
    for(int i=1;i<4;i++){
        if(v[0]<v[i]) count++;
    }

    cout << count << endl;
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