///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 09/12/2025   ||   ---   ***   ///

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
    int n, k;
    cin >> n >>k;

    if(n==1){
        cout << k << endl;
    }
    else{
        if(n==k){
            cout << 1 << endl;
        }
        else if(n<k){
            cout << (k+n-1)/n << endl;
        }
        else{
            if(n%k==0) cout << 1 << endl;
            if(n%k!=0) cout << 2 << endl;
        }
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