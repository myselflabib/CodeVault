///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 17/04/2026  ||   ---   ***   ///

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
    vi v1; v1=v;
    sort(all(v1));
    for(int i=0;i<n;i++){
        if(v[i]==v1[0]){
            cout << i << endl;
            break;
        }
    }




    
    return 0;
}