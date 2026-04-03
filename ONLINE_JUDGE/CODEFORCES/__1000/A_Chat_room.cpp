///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 02/04/2026  ||   ---   ***   ///

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

    string s;
    cin >> s;
    
    int x=0;
    string a="hello";
    for(int i=0;i<s.size(); i++){
        if(s[i]==a[x]) x++;
    }

    if(x==5) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}


/*
si mille x++ korbo kore a[x] er ta khujbo eivabe korar por jdi x 5 er soman hoy taile yes naile na. 
*/