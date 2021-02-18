#include<stdio.h>
#include <string.h>

//what is struct 
// struct is group od data type tp create new data type
#define MAX_NAME_LENGTH 1000

struct Newtype {
    int data;
    double decimal;
    char name[MAX_NAME_LENGTH];
};

int main(void){
    struct Newtype *instance;
    instance ->data = 20;
    instance->decimal = 2.34;
    strcpy(instance->name,"anan");
    
    //boht accessing the same data with difference syntax
    printf("%d",(*instance).data);
    printf("%d",instance->data);


    
}