///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 20/04/2026  ||   ---   ***   ///

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
    map<int, int> freq;
    for(int i=0;i<n;i++){
        cin >> v[i];
        freq[v[i]]++;
    }

    int toDdelete=0;
    for(auto x: freq){
        toDdelete+= x.second-1;
    }

    int ans=0;
    if(toDdelete%2==1) cout << (n-toDdelete)-1 << endl;
    else cout << n-toDdelete << endl;



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