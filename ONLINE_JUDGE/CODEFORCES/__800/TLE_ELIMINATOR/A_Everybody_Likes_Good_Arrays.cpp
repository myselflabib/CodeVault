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

    int cnt = 0;

    for(int i =0; i<n-1;i++){
        if(v[i]%2==v[i+1]%2){
            cnt++;
        }
    }

    cout << cnt << endl;

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
por por parity soman hoile oigula calculation korte hbee..
*/