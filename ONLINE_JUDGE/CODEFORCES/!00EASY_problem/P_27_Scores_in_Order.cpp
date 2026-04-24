///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 23/04/2026  ||   ---   ***   ///

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
    vi v;
    while(n--){
        int x; cin >> x;

        int pos=1;
        for(int y: v){
            if(y>=x) pos++;
        }
        cout << pos << endl;
        
        v.push_back(x);

    }

    sort(rall(v));
    for(int a: v){
        cout << a << " ";
    }
    
    return 0;
}