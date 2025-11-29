#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct entry {
    char fname[20];
    char lname[20];
    char phone[10];
    char name[50];
    float price;
};

int main() {

    struct entry *p, *q;

    p = (struct entry*) malloc(sizeof(struct entry));
    q = (struct entry*) malloc(sizeof(struct entry));

    p->price = 199.99;
    strcpy(p->name, "hard disk");

    *q = *p;

    free(p);
    free(q);

    
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
