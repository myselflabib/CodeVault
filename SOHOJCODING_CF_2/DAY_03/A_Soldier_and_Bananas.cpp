//DATE: 16/05/2026

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define debug(x) cout << #x << " --> " << x << endl;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    cout.tie(0);

    int k, n,w; cin >> k >> n >> w;
    ll b=0;
    for(int i=1;i<=w;i++){
        b+=(i*k);
    }

    if((b-n)<=0) cout << 0 << endl;
    else cout << b-n << endl;
    
    return 0;
}