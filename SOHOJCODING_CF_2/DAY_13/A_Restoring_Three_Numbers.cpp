//DATE: 08/06/2026

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

    vi x(4);
    for(int i=0;i<4;i++) cin >> x[i];
    sort(all(x));
    int a, b, c; 
    a=x[3]-x[0];
    b=x[3]-x[1];
    c=x[3]-x[2];
    cout << a << " " << b << " " << c << endl;
    

    
    return 0;
}