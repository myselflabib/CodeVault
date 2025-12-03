///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 04/12/2025   ||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

void solve() {
    int n;
    cin >> n;
    vector<char> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    int dot3 = 0;
    int totaldot = 0;
    for (int i = 0; i < n; i++){
        if(v[i]== '.' && i+1<n && v[i+1]== '.' && i+2<n && v[i+2]=='.'){
            dot3 = 1;
            break;
        }

        if(v[i]=='.'){
            totaldot++;
        }
    }

    if(dot3) cout << 2 << endl;
    else cout << totaldot << endl;
    
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