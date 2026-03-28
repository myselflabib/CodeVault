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

    vi v(n);

    vi fre;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i]%2==0)  fre.push_back(1);
        else fre.push_back(0);
    }

    if(fre[0]!=fre[1] && fre[0]!=fre[2]){
    cout << 1 << endl;
    return 0;
    }


    if(fre[n-1]!=fre[n-2] && fre[n-1]!=fre[n-3]){
        cout << n << endl;
        return 0;
    }
    

    for (int i = 1; i < n-1; i++){
        if(fre[i-1]!=fre[i] && fre[i]!=fre[i+1]){
            cout << i+1 << endl;
            break;
        }

    }  
    
    return 0;
}


/*
frequency er moddhe sob index e thik kore disi kon index e konta bijor ar konta jor..
tarpor check kortechi konta alada ase fre array te oi index ta print kore dile oitai answer..
*/