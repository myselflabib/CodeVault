///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 00/03/2026  ||   ---   ***   ///

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

    if(n==1){
        cout << "I hate it" << endl;
        return 0;
    }
    
    for(int i = 1; i<=n; i++){
        if(i%2!=0) cout << "I hate ";
    }
    
    return 0;
}