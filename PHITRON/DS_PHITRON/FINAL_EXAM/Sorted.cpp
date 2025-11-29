#include <bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    int t;
    cin >> t;
    while(t--){ 
        int n;
        cin >> n;  
        list<int> l;
        for(int i = 0; i < n; i++){
            int val;
            cin >> val;
            l.push_back(val);
        }
        l.sort();
        l.unique();
        for(int x: l){
            cout << x << " ";
        }

        cout << endl;
    }

    
    return 0;
}