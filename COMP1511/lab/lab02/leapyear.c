#include<stdio.h>
int main(){
    //input
    int year;
    printf("calculate leap year: ");
    scanf("%d",&year);
    /*
    if (year is not divisible by 4) then (it is a common year)
    else if (year is not divisible by 100) then (it is a leap year)
    else if (year is not divisible by 400) then (it is a common year)
    else (it is a leap year)
    */
    if(year % 4 != 0){printf("common year");}
    else if(year % 100 != 0){printf("leap year");}
    else if(year % 400 != 400){printf("common year");}
    else printf("leap year");
    
}