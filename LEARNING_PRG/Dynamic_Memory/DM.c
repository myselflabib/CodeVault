#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//malloc
//calloc
//realloc
//free

struct node{
    int data;
    struct node *link;
};

int main(){

    struct node* head = NULL;
    head = (struct node*) malloc(sizeof(struct node));
    
    
    
    
    // char str1[20] = "LABIB";
    // char *str = malloc(20*sizeof(char));

    // if(str==NULL){
    //     printf("Memory not create");
    // }
    // else{
    //     strcpy(str, str1);
    // }
    // printf("%s\n", str1);
    // printf("%s", str);
    // printf("%u", sizeof(str));

    free(str);

}