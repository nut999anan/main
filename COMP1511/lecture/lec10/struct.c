//Program to demo struct
//Anan Mingmitpattanakul

#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 1000 

struct cat{
    char name[MAX_LENGTH];
    char description[MAX_LENGTH];
    int age;
    int weight;


};

int main(){
    struct cat garfield;
    //garfield name
    char name[MAX_LENGTH];
    printf("please enter name for garfield: ");
    fgets(name,MAX_LENGTH-1,stdin);
    strcpy(garfield.name,name);
    //garfield description
    char description[MAX_LENGTH];
    printf("please enter description for garfield: ");
    fgets(description,MAX_LENGTH-1,stdin);
    strcpy(garfield.description,description);
    //garfield age 
    int age;
    printf("please enter age for garfield: ");
    scanf("%d",&age);
    garfield.age = age;
    //garfield weight
    int weight;
    printf("please enter weighte of garfield: ");
    scanf("%d",&weight);
    garfield.weight = weight;

    printf("SUMMARY:\n");
    printf("name = %s",garfield.name);
    printf("description = %s",garfield.description);
    printf("age = %d\n",garfield.age);
    printf("weight = %d\n",garfield.age);
    printf("--------------------");



    
}