//DATE: 13/06/2026

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
    int count=0;
    sort(all(v));
    for(int i=0;i<n;i++){  
        count+=abs(v[n-1]-v[i]);
    }
    cout << count << endl;
    return 0;
}