#include<stdio.h>
int main(){
    int number;
    printf("input number: ");
    scanf("%d",&number);
    if(number == 1){printf("you enter one");}
    if(number == 2){printf("you enter two");}
    if(number == 3){printf("you enter three");}
    if(number == 4){printf("you enter four");}
    if(number == 5){printf("you enter five");}
    else printf("invalid range");

}