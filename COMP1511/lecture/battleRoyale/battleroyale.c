#include<stdio.h>//input output
#include<string.h>//string 
#include<stdlib.h>//malloc and free


/* battle royal game 
1. Create player 
2. Add player
3. Link them 
4.print them out
*/


#define MAX 1000


struct player{
    char name[MAX] ;
    struct player* next;
};


struct player* create_player(struct player *inputnext,char name[MAX]);
void disp_player(struct player* inputPlayer);
struct player *insertAfter(struct player *previous, char name[MAX]);
struct player* insertAlpha(struct player *head, char name[MAX]);
struct player *remove_player(struct player *head);
void free_list(struct player *head);


 
int main(void){
    struct player *head = insertAlpha(NULL,"a");
    head = insertAlpha(head,"f");
    head = insertAlpha(head,"b");
    head = insertAlpha(head,"c");
    head = insertAlpha(head,"d");
    head = insertAlpha(head,"e");
    
    //game loop
    while (head != NULL)
    {
        head = remove_player(head);
    }
    printf("GAME END");
    free_list(head);


   
   return 0;
}


struct player* create_player(struct player *inputnext,char *name){
    struct player* n = malloc(sizeof(struct player));
    strcpy(n->name,name);
    n->next = inputnext;
    return n; 
}

void disp_player(struct player* inputPlayer){ 
    printf("\n");
    while(inputPlayer != NULL){
        printf("%s",inputPlayer->name);
        inputPlayer = inputPlayer->next;

    }
    printf("\n");

}

struct player *insertAfter(struct player *previous, char name[MAX]){
    struct player *p = create_player(NULL,name);//create new node point NULL
    if(previous == NULL){
        p->next = NULL;//copy what previous point to
        previous = p;//previous node point to inserted pointer
    }
    else{
        p->next = previous->next;//copy what previous point to
        previous->next = p;//previous node point to inserted pointer
    }
    
    return previous;
}

struct player* insertAlpha(struct player *head, char name[MAX]){

    struct player *current = head;
    struct player *prev = NULL;

    while (current != NULL && strcmp(name,current->name) > 0)
    {
        prev = current;
        current = current->next;
    }
    //insert at start of the list
    struct player *new_head  = head;

    if(prev == NULL){
       new_head = create_player(head,name); 
    }

    insertAfter(prev,name);
    return new_head;
    
}

struct player *remove_player(struct player *head){
    //find player in the list 
    //remove the node with input name
    //return pointer(head may be changed)
    char input_name[MAX];
    printf("remove: ");
    scanf("%s",input_name);

    //loop through the list to dinf macthing name 
    //change where it point to 
    //return head.
    struct player *temp = NULL;
    //case 1 head changed
    if(!strcmp(head->name,input_name)){
        temp = head;
        head = head->next;
        free(temp);
    }
    //case 2 head remain
    else{
        struct player *current = head;
        while (current != NULL)
        {
            if(strcmp(current->next->name,input_name) == 0){
                temp = current->next;
                current->next = current->next->next;
                free(temp);
            } 

            current = current->next;
        }
        
    }


    disp_player(head);
    return head;

}

void free_list(struct player *head){
    struct player *previous = NULL;
    while (head != NULL)
    {   
        previous = head;
        head = head->next;
        //free after move so the next still exist
        free(previous);
    }
    
}