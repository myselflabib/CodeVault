//DATE: 09/06/2026

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
    char c; cin >> c;
    
    // 𝚌𝚘𝚍𝚎𝚏𝚘𝚛𝚌𝚎𝚜
    
    if(c=='c' || c=='o' || c=='d' || c=='e' || c=='f' || c=='r' || c=='s') cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    cout.tie(0);

    int t; cin >> t;
      
    while(t--){ 
        solve();
    }
    return 0;
}