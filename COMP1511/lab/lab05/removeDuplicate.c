#include<stdio.h>
void printArray(int length, int array[length]);
int findArray(int value, int length, int array[length]);
void rmvduplicate(int length,int source[length],int destination[length]);


int main(void){
    int a[3] = {1,3,5};
    printArray(3,a);
    //printf("%d",findArray(5,3,a));

    int source1[6] = {1, 4, 1, 5, 9, 2};
    int source2[6] = {1, 1, 8, 2, 5, 3};
    int destination[6] = {0};
    //void rmvduplicate(int length,int source[length],int destination[length]);
    rmvduplicate(6,source2,destination);

    

}

void rmvduplicate(int length,int source[length],int destination[length]){
    //first element added 
    //loop and add source[i]
        //if source[i] in destination don't copied
    destination[0] = source[0];
    int i = 1;
    int j = 1;
    while (i<length)
    {
        //int findArray(int value, int length, int array[length]);
        if(!findArray(source[i],length,destination)){
            destination[j] = source[i];
            j++;
        }
        i++;
    }
    printArray(length,destination);
}

void printArray(int length, int array[length]){
    int i = 0;
    printf("[");
    while (i < length)
    {
        printf(" %d ",array[i]);
        i++;
    }
    printf("]\n");
}

int findArray(int value, int length, int array[length]){
    int i = 0;
    while(i < length)
    {
        if(value == array[i]){return 1;}
        i++;
    }
    return 0;
}