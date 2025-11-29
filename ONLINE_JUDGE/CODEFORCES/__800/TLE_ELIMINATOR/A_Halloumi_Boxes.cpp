///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 25/11/2025   ||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

void solve() {
    int n, k;
    cin >> n >> k;
    vi v1(n);
    for(int i = 0; i < v1.size(); i++){
        cin >> v1[i];
    }

    vi v2=v1;
    sort(v2.begin(), v2.end());
    if(v2==v1) cout << "YES" << endl;

    else{
        if(k>1) cout << "YES" << endl;
        else cout << "NO" << endl;
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