#include<bits/stdc++.h>
using namespace std;

typedef struct node {
    int data;
    node *link;
};

void count_node(node* head){
    int count = 0;
    if(head == NULL){
        cout << "The linked List is empty!" << endl;
    }
    node* ptr = NULL;
    ptr = head;

    while(ptr!=NULL){
        count++;
        ptr = ptr->link;
    }
    cout << count << endl;
}

int main(){
    node *head = NULL;
    head = new node();
    node* current = new node();
    node* a = new node();

    head->data = 45;
    current->data = 98;
    a->data = 3;

    head->link = current;
    current->link = a;
    a->link = NULL;

    // cout<< head->data<< endl;    
    // cout<< head->link->link->data << endl;   
    
    count_node(a);
    
    // struct entry *p, *q;

    // p = (struct entry*) malloc(sizeof(struct entry));
    // q = (struct entry*) malloc(sizeof(struct entry));

    // p->price = 199.99;
    // strcpy(p->name, "hard disk");

    // *q = *p;

    // free(p);
    // free(q);

    
    // struct entry list[4];

    // for(int i = 0; i < 1; i++){
    //     printf("\nEnter first name: ");
    //     scanf("%s", list[i].fname);

    //     printf("\nEnter last name: ");
    //     scanf("%s", list[i].lname);

    //     printf("\nEnter phone number: ");
    //     scanf("%s", list[i].phone);
    // }

    // printf("\n\n");

    // for (int i = 0; i < 1; i++){
    //     printf("name: %s %s", list[i].fname, list[i].lname);
    //     printf("\t\tPhone: %s\n", list[i].phone);
    // }

    return 0;
}
