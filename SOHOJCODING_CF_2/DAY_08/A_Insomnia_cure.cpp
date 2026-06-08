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
    int k, l, m, n, d; cin >> k >> l >> m >> n >> d;

    int count = 0;
    for (int i=1;i<=d;i++){
        if (i%k==0 || i%l==0 || i%m==0 || i%n==0) count++;
    }
    cout << count << endl;
    return 0;
}