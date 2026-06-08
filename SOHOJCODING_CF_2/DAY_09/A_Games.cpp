//DATE: 23/05/2026

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
    vi h(n), a(n);
    for(int i=0;i<n;i++) cin >> h[i] >> a[i];

    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(h[i]==a[j]) count++;
        }
    }

    cout << count << endl;

    return 0;
}