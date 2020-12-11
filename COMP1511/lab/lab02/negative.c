#include<stdio.h>

int main(){
    int input;
    scanf("%d",&input);
    if(input < 0){input = input * -1;}
    printf("input = %d",input);
}