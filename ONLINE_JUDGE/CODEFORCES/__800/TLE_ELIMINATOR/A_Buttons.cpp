///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 10/12/2025   ||   ---   ***   ///

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

    int t;
    cin >> t;
    
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        if(c%2==1){
            if(b>a) cout << "Second" << endl;
            else cout << "First" << endl;
        }
        else{
            if(a>b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
    }
    
    return 0;
}