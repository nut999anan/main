//implementation of a Queue
//store integer
//follow first in first out
//implemented using link  list 

//Anan Mingmitpattanakual(nut999anan@hotmail.com), 11/12/2020


#include "../Queue/queue.h"

#include<stdlib.h>
#include<stdio.h>


//typedef struct queueInternals *Queue;
//Queue is pointer to queueInternals

//define struct
struct queueInternals{
    struct queueNode *head;//first element 
    struct queueNode *tail;//last element
};

struct queueNode{
    int data;
    struct queueNode *next;
};

//define function
static struct queueNode *createNode(int data);

//create the queueInternals and make it ready to use
Queue queueCreate(){
    Queue newQueue=  malloc(sizeof(struct queueInternals));
    //size of Queue is pointer size not the linked list

    newQueue->head = NULL;
    newQueue->tail = NULL;

    return newQueue;

}

void queueFree(Queue q) {
    while (q->head != NULL) {
        struct queueNode *freeNode = q->head;
        q->head = q->head->next;
        free(freeNode);
    }
}

//add integer as a node the queue at the tail
void queueAdd(Queue q, int item){
   struct queueNode *newNode = createNode(item);
  
   if(q->tail == NULL){
       q->head = newNode;
       q->tail = newNode;

   }else{
       q->tail->next = newNode;
       q->tail = newNode;

   }
}


int queueRemove(Queue q){
    //remove the object that head point to and return integer 
    if(q->head == NULL)exit(1);

    struct queueNode *remove = q->head;
    int value = remove->data;
    q->head = q->head->next;
    free(remove);
    return value;
}

int queueSize(Queue q){
    //loop through the list and increment then return the value
    int size = 0;
    struct queueNode *current = q->head;
    while(current != NULL){
        size++;
        current = current->next;
    }
    return size;

}








/////HELPER FUNCTION/////////

//why do we use static to create node wouldn't it dissappear ? 

//static function is only used in the file it declare
static struct queueNode *createNode(int data){
   struct queueNode *newNode = createNode(data);
   newNode->data = data;
   newNode->next = NULL;

   return newNode;
}

