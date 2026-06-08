//DATE: 23/05/2026

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

    int n; cin >> n;
    int sum=0;
    while(n--){
        string s; cin >> s;
        if(s=="Tetrahedron") sum+=4;
        else if(s=="Cube") sum+=6;
        else if(s=="Octahedron") sum+=8;
        else if(s=="Dodecahedron") sum+=12;
        else sum+=20;
    }

    cout << sum << endl;
    return 0;
}