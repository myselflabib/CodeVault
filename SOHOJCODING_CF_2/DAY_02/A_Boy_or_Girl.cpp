//DATE: 15/05/2026

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
    string s; cin >>s;
    set<char> t;
    for(auto x: s){
        t.insert(x);
    }

    if(t.size()%2!=0) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;
    
    return 0;
}