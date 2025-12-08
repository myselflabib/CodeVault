///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 08/12/2025   ||   ---   ***   ///

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
    vi b(n), a;
    for(int i = 0; i<n; i++) cin >> b[i];

    a.push_back(b[0]);
    for(int i = 1; i<n; i++){
        if(b[i]>=b[i-1]){
            a.push_back(b[i]);
        }
        else{
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }

    cout << a.size() << endl;
    for(int i: a) cout << i << " ";
    cout << endl;
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

