//DATE: 22/05/2026

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
    int p; cin >> p;
    vi v1(p);
    map<int, int> mp;
    for(int i=0;i<p;i++){
        cin >> v1[i];
        mp[v1[i]]++;
    }
    int q; cin >> q;
    vi v2(q);
    for(int i=0;i<q;i++){
        cin >> v2[i];
        mp[v2[i]]++;
    }

    int ok=1;
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            ok=0;
            break;
        }
    }
    if(ok) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;


    
    return 0;
}