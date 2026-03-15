///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 14/03/2026  ||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define debug(x) cout << #x << ": " << x << endl;

void solve() {
    int n;
    cin >> n;
    vi v(n);
    int count2= 0;
    for(int i = 0; i<n; i++){
        cin >> v[i];
        if(v[i]==2) count2++;
    }

    if(count2==0){
        cout<< 1 << endl;
    }
    else if(count2%2!=0){
        cout<< -1 << endl;
    }
        
    else{
        int ck=count2/2, count=0;
        for(int i = 0; i<n; i++){
            if(v[i]==2) count++;
            if(ck==count){
                cout << i+1 << endl;
                break;
            }
        }
        
        
    }
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


/*
    puratai 2 er upor nircvor korteche..
*/