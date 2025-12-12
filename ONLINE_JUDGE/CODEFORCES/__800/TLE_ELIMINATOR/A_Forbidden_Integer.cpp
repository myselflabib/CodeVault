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
    int n, k, x;
    cin >> n >> k >> x;

    if(x<=1 || k<=1) cout << "NO" << endl;
    else if(x>=2 && k>=n) cout << "YES\n" << "1\n" << n << endl;
    else{
        cout << "YES" << endl;
        cout << n << endl;
        for(int i =0; i<n; i++){
            cout << 1 << " ";
        }
        cout << endl;
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