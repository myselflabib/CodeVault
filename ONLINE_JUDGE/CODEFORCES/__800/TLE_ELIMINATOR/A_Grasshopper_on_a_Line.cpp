///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 16/12/2025   ||   ---   ***   ///

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
    int x, k;
    cin >> x >> k;

    if(x%k!=0) cout << 1 << "\n" << x << endl;

    else{
        cout << 2 << "\n" << 1 << " " << x-1 << endl;
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