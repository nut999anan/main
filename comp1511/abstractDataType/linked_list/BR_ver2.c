// Battle  royale version 2 
// a linked list example 
// a progrram to tracking the players in the game

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



#define MAX_NAME_LENGTH 100

struct player {
    struct player *next;
    char name[MAX_NAME_LENGTH];
};


// funciton 
struct player *createPlayer(char inputName[MAX_NAME_LENGTH],struct player* inputNext);
void printPlayers(struct player* playerList);
struct player *insertPlayer(char inputName[MAX_NAME_LENGTH],struct player* insertPos);
struct player *alphaInsertPlayer(char inputName[MAX_NAME_LENGTH],struct player* head);
struct player *removePlayer(char inputName[MAX_NAME_LENGTH],struct player *head);
void clearPlayer(struct player *head);


int main(){
    struct player *head = alphaInsertPlayer("z",NULL);
    head = alphaInsertPlayer("b",head);
    head = alphaInsertPlayer("c",head);
    head = alphaInsertPlayer("d",head);
    head = alphaInsertPlayer("e",head);
    head = alphaInsertPlayer("a",head);
    head = removePlayer("e",head);
    head = alphaInsertPlayer("g",head);
    head = alphaInsertPlayer("f",head);
    printPlayers(head);
    clearPlayer(head);


    return 0;
    // what is the return value of the main function
}


// create a struct player in allocated memory 
// using inputName and inputNext
// return pointers to the memory that was allocated

struct player *createPlayer(
    char inputName[MAX_NAME_LENGTH],
    struct player* inputNext
){
    struct player *p = malloc(sizeof(struct player));
    strcpy(p->name, inputName);
    p->next = inputNext;
    return p;
}

void printPlayers(struct player* playerList){
    printf("this is the all player in  the list: ");
    while(playerList != NULL){
        printf("%s ",playerList->name);
        playerList = playerList -> next;
    }
    printf("\n");
}


// insert a player into a list as the next node after insertPos
// This will not remove any node
// Return the pointer to inserted node
// insert player before the insert player before the insert Pos
struct player *insertPlayer(char inputName[MAX_NAME_LENGTH],struct player *insertPos){
    // if list is empty just create one and return head
    struct player *insertedPlayer = createPlayer(inputName,NULL);
    //else create then arrange the pointer 
    // Return pointer to insertedplayer
    // Why do we need to return the  player pointer ?
    if(insertPos != NULL){
        //insert after a node that exists
        insertedPlayer->next = insertPos->next;
        insertPos->next = insertedPlayer;
    }
    return insertedPlayer;    // this is for empty list
}


struct player *alphaInsertPlayer(char inputName[MAX_NAME_LENGTH],struct player* head){
    struct player *previous =  NULL;
    struct player *current = head; // for loop

    while(current != NULL && strcmp(inputName,current->name) > 0){
        previous = current; //loop stop after condition met
        current = current->next;
    }
    

    if ( previous == NULL ){ //previous == null when the list is empty or name come before the first name
        return createPlayer(inputName,head);
    }  else {
        insertPlayer(inputName,previous);
        return head;
    }
}

struct player *removePlayer(char inputName[MAX_NAME_LENGTH],struct player *head){
    //find the remove pos and the prev
    //3  conditions 
        //at the head 
        //at the tail 
        //point to null
    struct player *previous = NULL;
    struct player *current = head;
    // Keep looping until we find the matching name
    while (current != NULL && strcmp(inputName, current->name) != 0) {
        previous = current;
        current = current->next;
    }
    if(current != NULL){
        //change the head
        if(current == head){
            head = head->next;
        } else {
            previous -> next = current -> next;
        }
        free(current);
        //not change the head
    }
    return head;
 
   
}

void clearPlayer(struct player *head){
    while(head != NULL){
        struct player *removePos = head;
        head = head -> next;
        free(removePos);
    }
}