//A score tracker for player in a  game 
// Demo of arrays and function 
// Anan Mingmitpattanakul 6110750095 5/10/2020
#include<stdio.h>
#define NUM_PLAYERS 4

//function  to print arrays 
void printArray(int array[],int length);
//funciton to print max value and its index 
void winner(int array[],int length);


int main(void){
    int score[NUM_PLAYERS]= {0};
    //directly assign score to players
    score[0] = 11;
    score[1] = 77;
    score[2] = 55;
    score[3] = 66;
    
    printArray(score,NUM_PLAYERS);
    winner(score,NUM_PLAYERS);
    
}

void printArray(int array[],int length){
    
    int i = 0;
    while (i < length)
    {
       printf("array %d's value  is %d.\n",i,array[i]);
       i++;
       // go to next element when printed
    }
    

}

void winner(int array[],int length){
    //set max to 0
    int max = 0;
    //get new max 
    int i = 0;
    int maxIndex;
    while (i < length)
    {
       if(max < array[i]){
           max = array[i];
           maxIndex = i;
       }
       i++;
       // go to next element when printed
    }

    //stop at the end of array and print max
    printf("The maximum value of array is %d at array[%d]",max,maxIndex);


}

