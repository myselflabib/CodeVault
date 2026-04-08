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
    int x, y; 
    cin >>x >> y;
    int a=x/2, b=y/2;
    vi v, v1;
    while(a--){
        v.push_back(1);
    }
    while(b--){
        v.push_back(2);
    }
    v1=v;
    sort(rall(v1));
    for(int s: v){
        cout << s;
    }
    for(int c: v1){
        cout << c;
    }
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

// https://www.codechef.com/problems/SMLPAL