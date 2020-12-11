#include<stdio.h>
//constant
#define SQUARE 1
#define POWER 2

int main(){
    int operand1,operand2;
    int instruction;
    printf("Enter: ");
    scanf("%d",&instruction);
    if(instruction == SQUARE){
        scanf("%d",&operand1);
        printf("%d",operand1*operand1);
    }
    else if (instruction == POWER)
    {
        scanf("%d",&operand1);
        scanf("%d",&operand2);
        printf("%1.0lf",pow(operand1,operand2));

    }
    
    
    
}