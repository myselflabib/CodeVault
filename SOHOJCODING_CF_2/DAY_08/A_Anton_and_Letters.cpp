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

    string s; getline(cin, s);
    set<char> d;
    for(auto x: s){
        if(x>='a' && x<='z') d.insert(x);
    }

    cout << d.size() << endl;
    
    return 0;
}