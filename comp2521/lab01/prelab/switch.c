#include<stdio.h>

int main(void){
    int name;
    scanf("%d",&name);
    
    switch (name){
        case 1:
            printf("1");break;
        case 2:
            printf("2");break;
        case 3:
            printf("3");break;
        default:
            printf("default");
    }
}