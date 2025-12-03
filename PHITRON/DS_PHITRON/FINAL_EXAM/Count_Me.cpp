#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while(t--) {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;

        map<string, int> mp;
        string bestWord = "";
        int bestCount = 0;

        while(ss >> word) {
            mp[word]++;  
            if(mp[word] > bestCount) {
                bestCount = mp[word];
                bestWord = word;
            }
        }

        cout << bestWord << " " << bestCount << endl;
    }

    return 0;
}
