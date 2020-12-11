#include<stdio.h>
int main(){
    int year;
    printf("enter year:  ");
    scanf("%d",&year);

    //algorithm
    //variable for algorithm
    int a,b,c,d,e,f,g,h,i,k,l,m,p;
    int easterMonth,easterDate;
    //algorithm itself
    a=year%19;
    b=year/100;
    c=year%100;
    d=b/4;
    e=b%4;
    f=(b+8)/25;
    g=(b-f+1)/3;
    h=(19*a+b-d-g+15)%30;
    i=c/4;
    k=c%4;
    l=(32+2*e+2*i-h-k)%7;
    m=(a+11*h+22*l)/451;
    easterMonth =(h+l-7*m+114)/31 ; 
    p=(h+l-7*m+114)%31;
    easterDate=p+1 ;

    // print output
    printf("Easter date = %d, Easter month = %d",easterDate,easterMonth);

}