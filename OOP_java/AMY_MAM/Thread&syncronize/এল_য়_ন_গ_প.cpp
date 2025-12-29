#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        float x;
        cin >> x;

        int count =0;
        while(x>1){
            x=x/2;
            count++;
        }

        cout << count << " days" << endl;
    }
    return 0;
}