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
    int s, x, y, z;
    cin >> s>> x >> y >> z;
    if(s-(x+y)>=z) cout << 0 << endl;
    else{
        if(s-(min(x, y))>=z) cout << 1 << endl;
        else cout << 2 << endl;
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

// https://www.codechef.com/problems/CHEFAPPS