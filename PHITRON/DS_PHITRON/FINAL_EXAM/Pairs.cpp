#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.first != b.first){
        if(a.first<b.first) return true;
        else return false;
    }

    else{
        if(a.second>b.second) return true;
        else return false;
    }
} 

int main()
{
    int t;
    cin >> t;
    vector<pair<string, int>> v(t);
    
    for (int i = 0; i < t; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), cmp);

    for(auto q: v){
        cout << q.first << " " << q.second << endl;
    }

    cout << endl;

    return 0;
}