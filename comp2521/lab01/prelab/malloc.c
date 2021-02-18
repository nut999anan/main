#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE  100

void printArray(int *array, int size);

//dynamic memory allocation 
int main(void){
    //int myArray[MAX_SIZE]
    int numberOfElements;
    printf("what is the number of element: ");
    scanf("%d",&numberOfElements);
    int *myArray = malloc(sizeof(int) * numberOfElements);
    int i = 0;
    while(i < numberOfElements){
        int myNumber;
        scanf("%d",&myNumber);
        myArray[i] = myNumber;
        i++;
    }
    printArray(myArray,numberOfElements);
}

void printArray(int *array,int size){
    int i = 0;
    while(i < size){
        printf("%d",array[i]);
        i++;
    }
}

