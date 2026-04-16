///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 16/04/2026  ||   ---   ***   ///

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
    int n, k; cin >> n >> k;
    vi v(n);
    for(int i=0;i<n;i++) cin >> v[i];

    if(v.size()==1){
        cout << 0 << endl;
        return;
    }
    sort(all(v));
    int cons=0, mx=0;
    for(int i=0;i<n;i++){
        cons++;
        if(i==n-1 || abs(v[i+1]-v[i])>k){
            mx=max(cons, mx);
            cons=0;
        } 
    }
    
    cout << n-mx << endl;

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