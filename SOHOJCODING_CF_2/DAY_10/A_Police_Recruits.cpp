//DATE: 24/05/2026

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
    int fr=0, count=0;
    while(n--){
        int x; cin >> x;
        if(x==-1 && fr==0) count++;
        else if(x==-1 && fr!=0) fr--;
        else fr+=x;
    }

    cout << count << endl;
    return 0;
}