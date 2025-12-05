///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 05/12/2025   ||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vi v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    
    if(mp.size()==1) cout << "Yes" << endl;
    else if(mp.size()>=3) cout << "No" << endl; 
    else{
        vi v2;
        for(auto x: mp){
            v2.push_back(x.second);
        }

        int diff = abs(v2[0]-v2[1]);
        if(diff<=1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}