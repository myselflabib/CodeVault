///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 14/03/2026  ||   ---   ***   ///

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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int sz = s.size();
    for(int i = 0, j=s.size()-1; i<j; i++, j--){
        if(s[i]!=s[j]) sz-=2;
        else break;
    }

    cout << sz << endl;
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


/*
    jodi samoner ar last er bit soman na hoy taile duita bit bad dibo.
    ar soman hoile stop. tarpor jotogula bit thakbe seitai answer.

    ektu easy asilo kmn jani..
*/