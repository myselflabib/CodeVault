///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 03/04/2026  ||   ---   ***   ///

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

    int x;
    set<int>s;
    for(int i = 0; i<4; i++){
        cin >> x;
        s.insert(x);
    }
    

    cout << 4-s.size() << endl;

    return 0;
}


/*
shudhu dekhte hbe koyta unique value ase 
tahole 4 theke unique value bad dile answer paoya jabe...
 

*/