#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1, 2, 3, 4, 6, 5, 9};

    // vector<int> ::iterator it;
    // for(auto it = v.rbegin(); it!=v.rend(); it++){
    //     cout << *it << " ";
    // }

    auto it = lower_bound(v.begin(), v.end(), 3);

    cout << *it << endl;
    return 0;
}
