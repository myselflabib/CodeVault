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

    int n, count=0; cin >> n;
    count+= n/100;
    n%=100;
    count+=n/20;
    n%=20;
    count+=n/10;
    n%=10;
    count+=n/5;
    n%=5;
    count+=n;
    cout << count << endl;
    return 0;
}