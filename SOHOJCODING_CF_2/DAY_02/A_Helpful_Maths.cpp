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

    string s; cin >> s;
    vi v;
    for(auto x: s){
        if(x!='+') v.push_back(x);
    }  
    sort(all(v));
    if(v.size()==1) cout << char(v[0]) << endl;
    else{
        for(int i=0;i<v.size();i++){
            if(i==v.size()-1) cout << char(v[i]);
            else cout << char(v[i]) << '+';
        }

    }
    return 0;
}