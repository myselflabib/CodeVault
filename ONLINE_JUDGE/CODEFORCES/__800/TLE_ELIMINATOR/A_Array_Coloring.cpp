///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 11/12/2025   ||   ---   ***   ///

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
    int oddSum = 0;
    int evenSum = 0;
    for(int i =0; i<n; i++){
        cin >> v[i];
        if(v[0]%2==0) evenSum+=v[i];
        else oddSum+=v[i];
    }

        if(oddSum%2==0 && evenSum%2==0 || oddSum%2==1 && evenSum%2==1) cout << "YES" << endl;
        else cout << "NO" << endl;
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