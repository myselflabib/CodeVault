///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 04/04/2026  ||   ---   ***   ///
/// DIV 4 _1090_


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
    vi v(7);
    int sum=0;
    for(int i=0; i<7;i++){
        cin >> v[i];
    }
    sort(all(v));
    for(int i=0; i<7;i++){
        if(i!=6) v[i]*=-1;
        sum+=v[i];
    }
    cout << sum << endl;
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


//sob cheye boro songkha ta negative na korlei max sum pabo