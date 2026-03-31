///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 30/03/2026  ||   ---   ***   ///

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

    string n;
    cin >> n;  

    vector<char>v;
    for(int x:n){
        if(x=='4' || x=='7') v.push_back(x);
    }


    
    int l = 0;
    for(int x:to_string(v.size())){
        if(x!='4' && x!='7'){
            l = 1;
            break;
        }
    }

    if(l) cout << "NO" << endl;
    else cout << "YES" << endl;
    
    return 0;
}