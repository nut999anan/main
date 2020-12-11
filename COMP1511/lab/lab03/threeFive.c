#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    printf("these are numbers dividible by 3 and 5: ");
    while( n > 0){
        if(n % 3 == 0)printf("%d ",n);
        else if(n % 5 == 0)printf("%d ",n);
        n--;

    }
}