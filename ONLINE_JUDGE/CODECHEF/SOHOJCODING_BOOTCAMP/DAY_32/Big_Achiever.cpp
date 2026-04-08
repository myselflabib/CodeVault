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
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int mx=v[0];
    cout << '1' << " ";
    vi v2(n);
    for(int i=1; i<n; i++){
        if(mx<v[i]){
            cout << '1' << " ";
            mx=v[i];
        }
        else cout << '0' << " ";
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


// https://www.codechef.com/problems/BIG