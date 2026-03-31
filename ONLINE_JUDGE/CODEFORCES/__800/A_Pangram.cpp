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

    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> v;
    if(n<26){
        cout << "NO" << endl;
        return 0;
    }

    
    for(int x: s){
        v.insert(tolower(x));
    }  

    if(v.size()==26) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}

/*
set e  nile shudhu unique gula thakbe..
tai jodi set er size 26 hoy taile yes ar naile no

abar jodi n 26er kom hoy taile to age thekei no
*/