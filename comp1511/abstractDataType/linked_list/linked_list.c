#include<stdio.h>
#include <stdlib.h>

struct node{
    struct node *next;
    int data;
};

struct node *createNode(int data,struct node  *next);
void printdata(struct node *n);

int main(){
    struct node *head = createNode(1,NULL);
    head = createNode(2,head);
    head = createNode(3,head);
    head = createNode(4,head);

    printf("head = %p",head);
    printdata(head);
    printf("head = %p",head);
    
}

struct node *createNode(int data,struct node  *next){
    struct node *n = malloc(sizeof(struct node));
    if(n == NULL){exit(1);}// not enough memory malloc return null
    n->data = data;
    n->next = next;
    return n;
}

void printdata(struct node *n){
    printf("data = ");
    while(n != NULL){
        printf("%d ",n->data);
        n = n->next;
    }
}