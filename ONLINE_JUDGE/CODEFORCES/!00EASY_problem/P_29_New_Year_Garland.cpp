///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 25/04/2026  ||   ---   ***   ///

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
    int r,g,b; cin >> r >> g >> b;

    int mx = max({r,g,b});


    if(mx-1<=(r+g+b-mx)) cout << "Yes" << endl;
    else cout <<"No" << endl;
}

int main(){
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
X _ X _ X _ X _ X ...

gap=mx-1

jodi baki thake baki=r+g+b-mx
baki>=(baki-1) hoilei sob gap fill hoye jabe



*/