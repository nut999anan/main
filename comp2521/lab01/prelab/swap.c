#include<stdio.h>
void swap(int *pointer_a,int *pointer_b);

int main(void){
    int first = 1;
    int second = 2;
    printf("first: %d second %d\n",first,second);
    swap(&first,&second);
    printf("first: %d second %d",first,second);
}


//revieve pointer of two integer and swap it value
void swap(int *pointer_a,int *pointer_b){
    int temp = *pointer_a;
    *pointer_a = *pointer_b;
    *pointer_b = temp;
}