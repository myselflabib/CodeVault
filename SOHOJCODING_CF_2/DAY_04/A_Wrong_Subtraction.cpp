//DATE: 17/05/2026

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
    for(int i=0;i<b;i++){
        if(a%10!=0) a--;
        else a/=10;
    }  
    cout << a << endl;
    
    return 0;
}