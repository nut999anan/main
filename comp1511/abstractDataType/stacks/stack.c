// Abstract Data Type Stack demo
// Marc Chee, April 2019

//this file implement the stack abstract data type
// ======================================================
// The type "stack" refers to a stack_internals pointer.
// In other files, programs can use stack, but they will
// not get direct access to the stack's internal workings
// nor will they know exactly what they are
#include<stdio.h>
#include<stdlib.h>

#define  MAX_STACK 1024
struct stackInternals{
    int stack[MAX_STACK];
    int top;//index of the current top stack 
};



typedef struct stackInternals *Stack;



// ======================================================
// These functions are the only way external code can
// manipulate a stack.

// functions to create and destroy stacks
Stack stackCreate(){
    //stack create create stack internal and returnpointers to it
    struct stackInternals *newStack = malloc(sizeof(struct stackInternals));
    newStack->top = 0;
    return newStack;
}
void stackFree(Stack s){
    free(s);
}

// Add and remove items from stacks
// Removing the item returns the item for use
void stackPush(Stack s, int item){
    // add item to the stack
    //add the value to the stack if stack is empty add value to 0
    s->stack[s->top] = item;
    s->top++;
}
int stackPop(Stack s){
    int returnedItem = s->stack[s->top - 1];
    s->top--;
    return returnedItem;
}

// Check on the size of the stack
int stackSize(Stack s){
    return s->top;
}