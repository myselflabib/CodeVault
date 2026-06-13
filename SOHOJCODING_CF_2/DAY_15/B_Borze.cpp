//DATE: 13/06/2026

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

    string s, n; cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='-' && s[i+1]=='.'){
            n.append("1");
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            n.append("2");
            i++;
        }
        else if(s[i]=='.') n.append("0");
    }

    cout << n << endl;
    
    return 0;
}