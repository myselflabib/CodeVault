///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 28/03/2026  ||   ---   ***   ///

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

    for(int i = 1; i<=n; i++){
        if(i==n){
            if(i%2==0) cout << "I love it" << endl;
            else cout << "I hate it" << endl;
            break;
        }
        if(i%2==0) cout << "I love that" << " ";
        else cout << "I hate that" << " ";
    }
    
    return 0;
}


/*
bijor e I hate
ar jor e I love ei duita milaite parlei hoye jay..
ektu chinta vabna arki..
*/