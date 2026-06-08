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

    string s; cin >> s;
    int lc=0, uc=0;  vector<char>ls; vector<char>us;
    for(int i=0;i<s.size();i++){
        if(s[i]<'a') uc++;
        else lc++;
        ls.push_back(tolower(s[i]));
        us.push_back(toupper(s[i]));
    }

    if(lc<uc){
        for(auto x: us){
            cout << x;
        }
    }
    else{
        for(auto x: ls){
            cout << x;
        }
    } 
    
    return 0;
}