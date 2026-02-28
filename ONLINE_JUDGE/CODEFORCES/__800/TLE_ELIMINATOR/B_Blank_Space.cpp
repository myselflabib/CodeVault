///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 27/02/2026   ||   ---   ***   ///

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
    int n;
    cin >> n;

    vi a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    int count = 0;
    int mx = 0;
    for(int i = 0; i< n; i++){
        if(a[i]==0){ 
            count++;
        }
        else{
            count = 0;
        }
        mx = max(mx, count); 
        
    }

    cout << mx << endl;
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