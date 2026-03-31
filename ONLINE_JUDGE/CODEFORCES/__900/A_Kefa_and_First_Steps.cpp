///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 31/03/2026  ||   ---   ***   ///

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
    vi v(n);
    for(int i=0; i<n;i++){
        cin >> v[i];
    }

    int count = 0, mx=0;
    for(int i=1; i<n;i++){
        if(v[i-1]<=v[i])count++;
        else{
            mx = max(mx, count+1);
            count=0;
        }
    }
    mx = max(mx, count+1);

    cout << mx << endl;
    return 0;
}

/*
 ekadhare prottek num tar porer num thkee choto hbe..
 ei rkm mx sequence koyta songkha hoy seitai ans..

 brute force use kore ager num choto kina seita chk kore
 jodi hoy taile count baray dibo...
 taile max count track korlei ans..

*/