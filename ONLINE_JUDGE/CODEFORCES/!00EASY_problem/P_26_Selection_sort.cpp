///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 22/04/2026  ||   ---   ***   ///

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
    vi v(n);
    for(int i=0;i<n;i++) cin >> v[i];

    int a=0, mn=INT_MAX, mn_idx=0;
    for(int i=0;i<n-1;i++){
        for(int j=a;j<n;j++){
            if(mn>v[j]){
                mn=v[j];
                mn_idx=j;
            }
        }
        swap(v[a], v[mn_idx]);
        a++;
        mn=INT_MAX;
        for(int k=0;k<n;k++) cout << v[k] << " ";
        cout << endl;
    }
    
    return 0;
}