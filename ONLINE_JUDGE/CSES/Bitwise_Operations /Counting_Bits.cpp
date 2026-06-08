//DATE: 18/05/2026

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

    int n, count=0; cin >> n; 
    for(int i=1;i<=n;i++){
        int in=i;
        while(in>0){
            if(in%2==1) count++;
            in/=2;
        }
    } 

    cout << count << endl;
    
    return 0;
}