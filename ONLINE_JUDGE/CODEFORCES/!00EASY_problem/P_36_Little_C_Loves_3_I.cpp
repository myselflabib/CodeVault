///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 18/04/2026  ||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define debug(x) cout << #x << " --> " << x << endl;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    cout.tie(0);

    int n; cin >> n;  
    if((n-2)%3!=0) cout << 1 << " " << 1 << " " << n-2 << endl;
    else cout << 1 << " " << 2 << " " << n-3 << endl;

    return 0;
}