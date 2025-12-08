#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this -> val = val;
        this->next = NULL;
    }
};

class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    head->next->next = b;
    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;



    return 0;
}