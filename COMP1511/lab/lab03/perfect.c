#include<stdio.h>
int main(){
    int n,i = 1;
    printf("Enter number: ");
    scanf("%d",&n);
    
    printf("these are factors: ");
    while( i <= n ){
        if(n % i == 0){printf(" %d",i);}
        i++;
        
        //if(n % 3 == 0)printf("%d ",n);
        //else if(n % 5 == 0)printf("%d ",n);
        //n--;

    }
}