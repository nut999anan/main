// Main file for Queue Abstract Data Type demo
// Marc Chee, modified July 2020

#include <stdio.h>
#include<stdlib.h>
#include "queue.h"


//we create struct for head and tail so we can change it by void function 
struct queueInternals {
    struct queueNode *head;
    struct queueNode *tail;

    //store head of the queue
};
struct queueNode{

    int data;
    struct queueNode *next;
    //node as a memeber of queue
};

Queue queueCreate(){
    //malloc head of queue(link list)
    Queue q = malloc(sizeof(struct queueInternals));
    q -> head = NULL;
    return q;
}
void queueFree(Queue q){
    free(q);//q is head of linked list
}
void queueAdd(Queue q, int item){
   struct queueNode *newNode = malloc(sizeof(struct queueNode));
   newNode->data = item;
   newNode->next = NULL;

    // if it is first item next point to null
    //tail and head point to this object
   if(q->head == NULL){
       q->head = newNode;
       q->tail = newNode;
   }
   //tail change to this item

   else{
       q->tail->next  = newNode;
       //point to inserted node 
       q->tail = newNode;
       //change tail to inserted node
   }


}
int queueRemove(Queue q){
    if(q->head == NULL){
        printf("Attempt to remove an element from empty queue");
        free(q);
        exit(1);// instead of else 
    }
    int return_data = q->head->data;
    struct queueNode *removed_node = q->head;
    //queue is not empty
    q->head = q->head->next;
    free(removed_node);
    return return_data;

    
}
int queueSize(Queue q){
    struct queueNode  *current = q->head;
    int count;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
    
}
