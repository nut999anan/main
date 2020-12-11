//implementation of a Queue
//store integer
//follow first in first out
//implemented using link  list 

//Anan Mingmitpattanakual(nut999anan@hotmail.com), 11/12/2020


#include "queue.h"

struct queueInternals{
    struct queueNode *head;
    struct queueNode *tail;
};

struct queueNode{
    int data;
    struct queuenode *next;
};