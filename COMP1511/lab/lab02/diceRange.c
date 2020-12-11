#include<stdio.h>
int main(){
    //varaible
    float side,dice;
    float min,max,avg;

    //input
    printf("enter sides on dice: ");
    scanf("%f",&side);
    printf("enter number of dice: ");
    scanf("%f",&dice);

    //input revise 
    printf("dice has %3.2f side \n",side);
    printf("they are %3.2f dice\n\n",dice);

    
    //calculate 
    min = dice;
    max = side * dice;
    avg = ( max + min )/2;

    //output
    printf("range = %3.2f to %3.2f \n",min,max);
    printf("Average value is %3.2f",avg);
    


}