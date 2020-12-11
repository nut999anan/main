#include<stdio.h>
#define MAX 6
#define MIN 1
int main(){
    int dieOne;
    printf("Please enter the value of die one: ");
    scanf("%d",&dieOne);  
    
    while (dieOne > MAX || dieOne < MIN)
    {
      printf("Valid value for the die One\n");
      printf("Please enter the value of die one: ");
      scanf("%d",&dieOne);
      //return 1;  //exit the function 
      //return 0;
    }

    int dieTwo;
    printf("Please enter the value of die two: ");
    scanf("%d",&dieTwo);  

    while (dieTwo > MAX || dieTwo < MIN)
    {
      printf("Valid value for the die Two\n");
      printf("Please enter the value of die Two: ");
      scanf("%d",&dieTwo);  
      // dieTwo =dieTwo % MAX ;
      // if(dieTwo == 0){dieTwo = 6;}
    }
    
    

    int total = dieOne + dieTwo;
    printf("Total of the dice roll is %d\n",total);

    
}