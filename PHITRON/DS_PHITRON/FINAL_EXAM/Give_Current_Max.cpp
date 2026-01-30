#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<pair<int, pair<int, string>>> pq;

    for (int i = 0; i < n; i++){
        string name;
        int age, marks;


        cin >> name >> age >> marks;
        pq.push({marks,{-age, name}});
    }

    int q;
    cin >> q;

    while (q--){
        int cmd;
        cin >> cmd;

        if (cmd == 0) {
            string name;
            int age, marks;
            cin >> name >> age >> marks;

            pq.push({marks, {-age, name}});


            if (pq.empty()) {
                cout << "Empty\n";
            } else {
                auto t = pq.top();
                cout << t.second.second << " "
                     << -t.second.first << " "
                     << t.first << "\n";

            }
        }
        else if (cmd == 1) {
            if (pq.empty()) {
                cout << "Empty\n";
            } else {
                auto t = pq.top();
                cout << t.second.second << " "
                     << -t.second.first << " "
                     << t.first << "\n";
            }
        }
        else if (cmd == 2) {
            if (pq.empty()) {
                cout << "Empty\n";
            } else {
                pq.pop();
                if (pq.empty()) {
                    cout << "Empty\n";
                } else {
                    auto t = pq.top();
                    cout << t.second.second << " "
                         << -t.second.first << " "
                         << t.first << "\n";
                }
            }
        }
    }
    return 0;
}
