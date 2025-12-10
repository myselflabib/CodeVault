///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 00/00/2025   ||   ---   ***   ///

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
    vi a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    sort(all(a));
    vi b, c;
    for(int i =0; i<n; i++){
        if(a[i]!=a[n-1]) b.push_back(a[i]);
        else c.push_back(a[i]);
    }

    if(b.size()==0) cout << -1;
    else{
        cout << b.size() << " " << c.size() << endl;
        for(int x: b) cout << x << " ";
        cout << endl;
        for(int y: c) cout << y << " ";
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