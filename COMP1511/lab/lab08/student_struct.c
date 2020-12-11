#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000
//student


struct student
{
    char name[MAX];
    int zid;
    double assignment1;
    struct student *next;

};

struct class
{
    char name[MAX][MAX];
    int student_number;//number of student
    struct student* head;//pointer to loop through student

};


void display_student(struct student *head);
struct student *create_student(struct student *head,char inputame[MAX]);


int main(){
    struct student* head = NULL;
    head = create_student(head,"nut");
    head = create_student(head,"num");
    //head = create_student(head,"milk");
    struct class *class2020;
    struct student *current = head;
    int i;

    //store name in class 2020
    while (current != NULL)
    {
        strcpy(class2020->name[i],current->name);
        i++;
        current = current->next;
    }
    
    display_student(head);


}


struct student *create_student(struct student *head,char inputname[MAX]){
    struct student* s = malloc(sizeof(struct student));
    strcpy(s->name,inputname);//write name
    printf("name:%s",inputname);
    printf("\nzid: ");
    scanf("%d",&(s->zid));
    printf("assignment1: ");
    scanf("\n%lf",&(s->assignment1));
    s-> next = head;
    return s;

}

void display_student(struct student *head){
    while (head != NULL)
    {
        printf("\nname: %s\n",head->name);//name
        printf("zid: %d\n",head->zid);//zid
        printf("assignment1: %.2lf\n",head->assignment1);//asignment 1
        head = head->next;
    }
    
}
