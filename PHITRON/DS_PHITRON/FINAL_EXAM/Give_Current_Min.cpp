#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    multiset<int> m;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        m.insert(x);
    }

    int q;
    cin >> q;

    while(q--){
        int cmd;
        cin >> cmd;

        if(cmd== 0){
            int x;
            cin >> x;
            m.insert(x);

            if(m.empty())
                cout << "Empty\n";
            else
                cout << *m.begin() << "\n";
        }
        else if(cmd ==1){
            if(m.empty())
                cout << "Empty\n";
            else
                cout << *m.begin() << "\n";
        }
        else if(cmd ==2){
            if(m.empty()){
                cout << "Empty\n";
            }
            else{
                m.erase(m.begin());

                if(m.empty())
                    cout << "Empty\n";
                else
                    cout << *m.begin() << "\n";
            }
        }
    }

    return 0;
}
