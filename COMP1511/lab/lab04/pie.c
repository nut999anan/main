#include<stdio.h>
int array[15] = {1,0,4,1,5,9,2,6,5,3,5,8,9,7,9};
int main(){
    int n=0;
    int digit;
    printf("How many digit of pi:  ");
    scanf("%d",&digit);
    printf("pi = 3.");
    while (n < digit - 1)
    {
        printf("%d",array[n]);
        n++;
        /* code */
    }
    
    
}