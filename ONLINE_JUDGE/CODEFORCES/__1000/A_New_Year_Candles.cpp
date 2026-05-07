//DATE: 05/05/2026

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

    int a, b; cin >> a >> b;

    int h = 0;
    int br = 0;
    while(a>0){
        h+=a;
        br+=a;

        a=br/b;
        br=br%b;

    }

    cout << h << endl;
    
    return 0;
}