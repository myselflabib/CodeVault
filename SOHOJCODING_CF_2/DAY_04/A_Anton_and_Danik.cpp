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

    int n; cin >> n; string s; cin >> s;
    int a=0, b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') a++;
        else b++;
    }  

    if(a>b) cout << "Anton" << endl;
    else if(a<b) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    
    return 0;
}