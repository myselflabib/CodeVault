///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 14/04/2026   ||   ---   ***   ///

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
    for(int i =0; i<n; i++){
        cin >> v[i];
    }
    int all=v[0];
    if(n%2!=0){
        for(int i=1; i<n;i++){
            all^=v[i];
        }
        cout << all << endl;
    }

    else{
        for(int i=1; i<n;i++){
            all^=v[i];
        }
        if(all) cout << -1 << endl;
        else cout << all << endl;
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

/*
    (a1+a2+a3+a4..) jekono kichu hoite pare 
    x+x+x==x odd er khettre
    x+x==0 even er khettre

    odd e a array er XOR e answer
    
    ar even e jodi a array er XOR zero hoy taile to oitai
    nahole answer e paoya jabe na.
    karon x+x+x+x==0 hoyei thake age..


*/