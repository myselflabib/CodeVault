///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 03/12/2025   ||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

void solve() {
    ll n, x;
    cin >> n >> x;

    vl v;
    v.push_back(0);
    for (int i = 0; i < n; i++){
        int point;
        cin >> point;
        v.push_back(point);
    }
    v.push_back(x);

    ll point_dis = INT_MIN;
    for(int i = 1; i < v.size(); i++){
        if(i == v.size()-1){
            point_dis = max(point_dis, 2*(v[i]-v[i-1]));
        }

        else{   
            point_dis = max(point_dis, (v[i]-v[i-1]));
        }
    }

    cout << point_dis << endl;
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