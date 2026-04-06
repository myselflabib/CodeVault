///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 06/04/2026  ||   ---   ***   ///

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

    string a, b;
    cin >> a >> b;

    for(int i=0; i<a.size();i++){
        if(a[i]==b[i]) cout<< '0';
        else cout<< '1';
    }

    cout << endl;
    
    return 0;
}

/*
duita digit ekoi hoile 0
ar soman na hoile 1

*/