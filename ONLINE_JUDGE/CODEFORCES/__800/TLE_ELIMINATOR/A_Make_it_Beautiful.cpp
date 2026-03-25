///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 25/03/2026  ||   ---   ***   ///

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

    vi v(n);
    for(int i =0; i<n;i++){
        cin >> v[i];
    }

    if(v[0]==v[n-1]){
        cout <<"NO" << endl;
        return;
    }
    else cout << "YES" << endl;
    cout << v[n-1] << " ";

    for(int i = 0; i<n-1;i++){
        cout << v[i] << " ";
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


/*
    sob gula serial e thakle jhamela jemon:
    1,2,3 taile 1+2=3 tai beitiful thake na..

    last er dik theke max num niye ese samone bosay dile beutiful hoy

    ar jodi sob number same hoy taile ar oita beutiful kora jay na..

*/