///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 09/04/2026  ||   ---   ***   ///

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

    int a, b; cin >> a>> b;  

    if(abs(a-b)==1 || (abs(a-b)==0 && a!=0 && b!=0)) cout<< "YES"<< endl;
    else cout << "NO"<< endl;


    return 0;
}




// if(a>b || (a==0 && b==0)){
    //     cout << "NO"<< endl;
    //     return 0;
    // }

    // int ok=1;
    // for(int i=a+1; i<=b;i++){
    //     if(i-i+1!=1){
    //         ok=0;
    //         break;
    //     }
    // }