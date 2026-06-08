//DATE: 22/05/2026

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

    int n; cin >> n;
    vi v(n); 
    for(int i=0;i<n;i++) cin >> v[i];
    int mx_idx=0, mn_idx=0, mn = v[0], mx = v[0];
    for(int i=0;i<n;i++){
        if(mn>=v[i]){
            mn=v[i];
            mn_idx=i;
        }
        if(mx<v[i]){
            mx=v[i];
            mx_idx=i;
        }
    }

    int ans=mx_idx+(n-(mn_idx+1));
    if(mx_idx>mn_idx) ans--;
    cout << ans << endl;
    return 0;
}