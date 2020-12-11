#include<stdio.h>
//sorted integer
int main(){

    //get three input
    int a,b,c;
    printf("enter three integer: \n");
    printf("first: ");
    scanf("%d",&a);
    printf("second: ");
    scanf("%d",&b);
    printf("third: ");
    scanf("%d",&c);
    
    //error
    if(a == b || b==c){
        printf("error 404");
        return 0;
    }
    
    //3 integer 6 possible order
    printf("order is: ");
    if(a>b && b>c)printf("%d %d %d",a,b,c);
    if(a>c && c>b)printf("%d %d %d",a,c,b);
    if(b>a && a>c)printf("%d %d %d",b,a,c);
    if(b>c && c>a)printf("%d %d %d",b,c,a);
    if(c>a && a>b)printf("%d %d %d",c,a,b);
    if(c>b && b>a)printf("%d %d %d",c,b,a);
    

    
    

}