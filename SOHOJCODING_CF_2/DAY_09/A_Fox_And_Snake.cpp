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

    int n, m; cin >> n >> m;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++) cout << "#";
        } 
        else{
            if((i/2)%2==0) {
                for(int j=0;j<m-1;j++) cout << ".";
                cout << "#";
            } 
            else{
                cout << "#";
                for(int j=1;j<m;j++) cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}