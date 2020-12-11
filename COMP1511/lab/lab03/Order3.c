#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Enter C: ");
    scanf("%d",&c);


    (a > b && b > c)&&printf("%d %d %d",a,b,c);
    (a > c && c > b)&&printf("%d %d %d",a,c,b);
    (b > a && a > c)&&printf("%d %d %d",b,a,c);
    (b > c && c > a)&&printf("%d %d %d",b,c,a);
    (c > a && a > b)&&printf("%d %d %d",c,a,b);
    (c > b && b > a)&&printf("%d %d %d",c,b,a);


}