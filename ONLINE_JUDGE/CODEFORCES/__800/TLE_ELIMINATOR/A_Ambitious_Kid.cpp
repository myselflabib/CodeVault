///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 07/12/2025   ||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define debug(x) cout << #x << " " << x << endl;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    cout.tie(0);

    int n;
    cin >> n; 
    
    vi v(n);
    bool zero =false;
    for(int i = 0; i<n; i++){
        cin >> v[i];
        v[i] = abs(v[i]);
        if(v[i]==0) zero = true;
    }

    sort(all(v));
    if(zero) cout<< 0 << endl;
    else cout << v[0] << endl;

    return 0;
}