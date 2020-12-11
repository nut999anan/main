#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#define MAX 1000
// Abstract Data Type Stack demo
// Marc Chee, April 2019

// This file describes the interface to a stack of ints
// It must be included in other code files to be of use

// ======================================================
// The type "stack" refers to a stack_internals pointer.
// In other files, programs can use stack, but they will
// not get direct access to the stack's internal workings
// nor will they know exactly what they are
typedef struct stackInternals *Stack;//pointer to arrays or arrays name

struct stackInternals{
    int stack[MAX];
    int top;//particular index
};


// ======================================================
// These functions are the only way external code can
// manipulate a stack.

// functions to create and destroy stacks
Stack stackCreate(){
    Stack s  = malloc(sizeof(Stack));
    //malloc the array 
    //empty the array and point index to 0 ?why
    s->top = 0;
    return s;
}
void stackFree(Stack s){
    free(s);
}

// Add and remove items from stacks
// Removing the item returns the item for use
void stackPush(Stack s, int item){
    //add item at the top of the stack
    //when stack at max 
    if(s->top == MAX){
        printf("MAXIMUM stack size reached");
        exit(1);
    }
    (s->stack)[s->top] = item;
    s->top++;
}
int stackPop(Stack s){
    if(s->top == 0){
        printf("stack is empty");
        exit(1);
    }
    s->top--;
    return s->stack[s->top];;
}

// Check on the size of the stack
int stackSize(Stack s){
    return s->top;
}