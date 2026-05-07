// #include <bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int b,k; cin>>b >> k;
//     vector<int>v(k);
//     for(int i=0;i<k;i++) cin >> v[i];
//     long long sum=0, p=k-1, a=0;
//     for(int i=0;i<k;i++){
//         a=((v[i]*int(pow(b,p))))%10;
//         sum+=a%10;
//         p--;
//     }

//     if(sum%2==0) cout << "even" << endl;
//     else cout <<"odd" << endl;

//     return 0;
// }


///   ***   ---   ||   SOLVED BY LABIB   ||   ---   ***   ///
///   ***   ---   ||   DATE: 00/03/2026  ||   ---   ***   ///

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

    int b,k; cin>>b >> k;
    vector<int>v(k);
    for(int i=0;i<k;i++) cin >> v[i];

    long long sum=0;
    if(b%2==0){
        if(v[k-1]%2==0)cout << "even" << endl;
        else cout << "odd" << endl;
    }
    else{
        for(int x: v){
            sum += x;
        }

        if(sum%2==0) cout << "even" << endl;
        else cout << "odd" << endl;
    }
    
    return 0;
}