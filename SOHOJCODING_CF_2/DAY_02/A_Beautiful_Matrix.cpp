//DATE: 15/05/2026

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

    vector<vi> v(5);
    int r, c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int x; cin >> x;
            v[i].push_back(x);
            if(x==1){
                r=i;
                c=j;
            }
        }
    }

    cout << abs(r-2)+abs(c-2) << endl;


    
    return 0;
}