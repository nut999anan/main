// A heavily modified version of paint.c for Assignment 1

// This is starter code for the Tourist Program

// This program was written by Marc Chee (marc.chee@unsw.edu.au)
// in June 2019
//

#include <stdio.h>

// The dimensions of the map
#define N_ROWS 10
#define N_COLS 10

// Helper Function: Print out the map as a 2D grid
void printMap(int map[N_ROWS][N_COLS], int posR, int posC);


int main(void) {
    int map[N_ROWS][N_COLS] = {0};
    int posR = 0;
    int posC = 0;
    printMap(map,posR,posC);//(2d_array,row,column)
    
    //movement
    int exitloop = 0;
    while (!exitloop)
    {

    //track visted location     
    map[posR][posC]++;
    if (map[posR][posC] > 1)
    {
        printf("\nYOU LOST");
        return 0;
    }
    
    printf("please enter a direction using numpad: ");
    int input = 0;
    scanf("%d",&input);
    if(input == 8){posR--;}//up
    else if(input == 2){posR++;}//down
    else if(input == 4){posC--;}//left
    else if(input == 6){posC++;}//right
    //exit loop
    else if(input == 5){
        exitloop = 1;
        printf("Exit loop\n");
        return 0;// to not print map after exit the loop
    }//right

    //out of bound
    if(posR > 9)posR = 0;
    else if(posC > 9)posC = 0;
    else if(posR < 0 )posR = 9;
    else if(posC < 0 )posC = 9;



    printf("posR = %d\n",posR);
    printf("posC = %d\n",posC);
    printMap(map,posR,posC);//(2d_array,row,column)
    }
    
   
    


    return 0;
}


// Prints the map, by printing the integer value stored in
// each element of the 2-dimensional map array.
// Prints a T instead at the position posR, posC
void printMap(int map[N_ROWS][N_COLS], int posR, int posC) {
    int row = 0;
    while (row < N_ROWS) {
        int col = 0;
        while (col < N_COLS) {
            if( (posR == row) && (posC == col) ) {
                printf("T ");
            } else {
                printf("%d ", map[row][col]);
                
            }            
            col++;
        }
        row++;
        printf("\n");
        
    }
  


}