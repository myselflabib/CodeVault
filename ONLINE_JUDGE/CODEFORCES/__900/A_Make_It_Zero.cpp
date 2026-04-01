///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 31/03/2026  ||   ---   ***   ///

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
    cin >>n;
    vi v(n);
    for (int i = 0; i<n; i++){
        cin >> v[i];
    }

        if(n%2==0) {
            cout << 2 << endl;
            cout << 1 <<" "<< n << endl;
            cout << 1 <<" "<< n << endl;
        } 

        else{
            cout << 4 << endl;
            cout << 1 <<" "<< n - 1 << endl;
            cout << 1<<" "<< n - 1 << endl;
            cout << n-1 <<" "<< n << endl;
            cout << n-1 <<" "<< n << endl;
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