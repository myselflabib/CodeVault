///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 21/04/2026  ||   ---   ***   ///

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
    vi v(n);
    for(int i=0;i<n;i++) cin >> v[i];

    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i;j++){
            if(v[j-1]>v[j]) swap(v[j-1],v[j]);
        }
        for(int k=0;k<n;k++) cout << v[k] << " ";
        cout << endl;
    }
    
    return 0;
}