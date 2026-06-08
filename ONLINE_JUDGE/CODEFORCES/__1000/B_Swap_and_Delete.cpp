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
#define debug(x) cout << #x << ": " << x << endl;

void solve() {
    string s; cin >> s;
    if(s.size()==1){
        cout << 1 << endl;
        return;
    }
    int o=0, z=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') o++;
        else z++;
    }

    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            if(z>0) z--;
            else break;
        }
        else{
            if(o>0) o--;
            else break;
        }
    }
    cout << z+o << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); 
    cout.tie(0);

    int t;
    cin >> t;  
    while(t--){ 
        solve();
    }
    return 0;
}



// int ans=0;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='0'){
//             if(o>0) o--;
//             else ans++;
//         }
//         else{
//             if(z>0) z--;
//             else ans++;
//         }
//     }