///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 05/12/2025   ||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin>>x >> s;

    int ok = 0;
    for(int i = 0; i < 10; i++){
        if(x.find(s)!=-1){
            ok = true;
            cout << i << endl;
            break;
        }
        x+=x;
    }
    if(ok==false) cout << -1 << endl;
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