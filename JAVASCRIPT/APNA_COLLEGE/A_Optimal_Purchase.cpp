//DATE: 18/05/2026

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
    ll n, a, b; cin >> n >> a >> b;
    if(3*a<=b) {
        cout << n*a << endl;
        return;
    }

    ll c1=(n/3)*b+(n%3)*a;
    ll c2=((n/3)+1)*b;

    cout << min(c1,c2) << endl;

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