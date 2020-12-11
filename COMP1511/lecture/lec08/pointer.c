#include<stdio.h>
int function(int a);

int main(void){
    int a = 5;
    printf("%d %p\n",a,&a);
    function(a);
    
}

int function(int a){
    printf("%d %p",a,&a);
}