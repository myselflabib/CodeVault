#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b,k; cin>>b >> k;
    vector<int>v(k);
    for(int i=0;i<k;i++) cin >> v[i];
    long long sum=0, p=k-1, a=0;
    for(int i=0;i<k;i++){
        a=((v[i]*int(pow(b,p))))%10;
        sum+=a%10;
        p--;
    }

    if(sum%2==0) cout << "even" << endl;
    else cout <<"odd" << endl;


    return 0;
}