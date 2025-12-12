///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 12/12/2025   ||   ---   ***   ///

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

    vi v(n);
    for(int i =0; i<n; i++) cin >> v[i];

    if(!is_sorted(all(v))) cout << 0 << endl;
    
    else{
        vi v2;
        for(int i =1; i<n; i++){
            int x = v[i]-v[i-1];
            v2.push_back(x);
        }

        sort(all(v2));
        cout << (v2[0]/2)+1 << endl;
    }
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