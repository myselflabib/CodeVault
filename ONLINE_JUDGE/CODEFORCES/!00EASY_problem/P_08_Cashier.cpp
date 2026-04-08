///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 07/04/2026  ||   ---   ***   ///

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

    int n, l, a; cin >> n >> l>> a;
    int totalser=0, pend=0;
    while(n--){
        int x, y; cin>> x >> y;
        int gap=x-pend;
        totalser+=(gap/a);
        pend=x+y;
    }
    int gap=l-pend;
    totalser+=(gap/a);
    cout << totalser << endl;
    
    return 0;
}