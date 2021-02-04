// Battle  royale
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




int main(){
    struct player *list_head= createPlayer("nut",NULL);
    list_head = createPlayer("milk",list_head);
    list_head = createPlayer("num",list_head);
    printPlayers(list_head);
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