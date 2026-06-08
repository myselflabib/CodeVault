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

    string s1, s2, s3, s; cin >> s1 >> s2 >> s3;
    s=s1+s2; sort(all(s));
    sort(all(s3));
    if(s==s3) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}