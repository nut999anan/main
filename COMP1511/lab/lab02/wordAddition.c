#include<stdio.h>
int main(){
    //variable 
    int n1,n2;
    //get input : Please enter two integers: 
    printf("Please enter two integers:\n");
    
    printf("first integer: ");
    scanf("%d",&n1);
    
    printf("second integer: ");
    scanf("%d",&n2);

    
    //output in range [1,10] 
    if((n1 + n2) <  11 && (n1 + n2) > 0){
        printf("sum: = ");
        if(n1+n2 == 1){printf("one");}
        else if(n1+n2 == 2){printf("two");}
        else if(n1+n2 == 3){printf("three");}
        else if(n1+n2 == 4){printf("four");}
        else if(n1+n2 == 5){printf("five");}
        else if(n1+n2 == 6){printf("six");}
        else if(n1+n2 == 7){printf("seven");}
        else if(n1+n2 == 8){printf("eight");}
        else if(n1+n2 == 9){printf("nine");}
        else if(n1+n2 == 10){printf("ten");}
        return 0;
    }
    printf("sum: = %d",n1+n2);

    
}