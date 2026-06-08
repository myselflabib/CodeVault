//DATE: 23/05/2026

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
    vi v; int p=1;
    while(n>0){
        int d=n%10;
        if(d!=0) {
            v.push_back(d*p);
        }

        n/=10;
        p*=10;
    }
    cout << v.size() << endl;
    for(auto x: v){
        cout << x << " ";
    }
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