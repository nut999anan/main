// Author: Anan Mingmitoattanakul z5331054
// Date: 22/10/2020
// UNSW Freefall assignment.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 15
#define EMPTY 0
#define STONE 1

// TODO: Add any extra #defines here.

void printMap(int map[SIZE][SIZE], int playerX);
void placingStone(int map[SIZE][SIZE],int playerX);
void movingPlayer(int *playerx, int command);
void firingLaser(int map[SIZE][SIZE],int playerX);
int shift(int map[SIZE][SIZE],int playerX);
void verticalFlip(int map[SIZE][SIZE]);
void tnt(int map[SIZE][SIZE], int row,int column);
int marchingblock4(int map[SIZE][SIZE], int count);
int wincondition(int map[SIZE][SIZE]);
int controlPlayer(int map[SIZE][SIZE], int playerX);

//marching block 
//gravity => downshift leftshift rightshift upshift

// TODO: Add any extra function prototypes here.

int main (void) {
    // This line creates our 2D array called "map" and sets all
    // of the blocks in the map to EMPTY.
    int map[SIZE][SIZE] = {EMPTY};

    // This line creates out playerX variable. The player starts in the
    // middle of the map, at position 7.
    int playerX = SIZE / 2; // initial position for player
    

    //setting up the stone
    placingStone(map,playerX);
    
    
    //control the player
    controlPlayer(map,playerX);
  

    

    return 0;
}

// Print out the contents of the map array. Then print out the player line
// which will depends on the playerX variable.
void printMap(int map[SIZE][SIZE], int playerX) {
    
    // Print values from the map array.
    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            printf("%d ", map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }    
    
    // Print the player line.
    i = 0;
    while (i < playerX) {
        printf("  ");
        i++;
    }
    printf("P\n");
}


//Recieve input from terminal and put the value on the map
void placingStone(int map[SIZE][SIZE],int playerX){
   int row;
   int column;
   int length;
   int value;

   // loop to get input
   printf("Placing stone:  ");
   while(scanf("%d%d%d%d", &row,&column,&length,&value) != EOF)
   {
       //invalid condition
       int condition1 = (column + length > SIZE);//line of stone is overflow
       int condition2 = ((column > SIZE - 1)||(row > SIZE - 1));//row and column are not in map

       //print out error message
       if(condition1 || condition2){
           printf("invalid input\n");
       }



       //placing stone according to recieving input 
       else{
       int i = 0;
       while (i < length)
       {
           map[row][column] = value;
           column++;
           i++;
       }
       printMap(map,playerX);  
       //update the map after each  input 
       } 
   }
   printMap(map,playerX); //print map after done

}


//Move the player location on the map
void movingPlayer(int *playerX,int command){
    //move left 
    if(command == 6){
        ++*playerX;
        if(*playerX > 14)(*playerX = 14);//bound to the screen
    }

    //move right
    else if(command == 4)
    {
        --*playerX;
        if(*playerX < 0)(*playerX = 0);//bound to the screen
    }
    

}

void firingLaser(int map[SIZE][SIZE],int playerX){
    printf("Firing laser\n");
    int i = SIZE - 1;
    int laserRange = 3;

    //check the nearest stone in player's column
    while (i >= 0)
    {
        if(map[i][playerX] == 1){
            map[i][playerX] = 0;//laser destroy a block
            laserRange--;//count element laser destroy
        }
        else if(map[i][playerX] == 2){
            tnt(map,i,playerX);  
            printf("\nBOMMMMMMMMMMMMMMMMMMMMB\n");
        }
        

        //exit loop when exceed laser range
        if(laserRange == 0)i = -1;
        i--;// move to row above
    }
}

int shift(int map[SIZE][SIZE],int playerX){
    //create array
    //copy to array
    //copy back to orignal array
    //if the map reach player game end

    //map copy
    int mapCopy[SIZE][SIZE] = {EMPTY};
    //shift array and place it in to copy array
    
    int j = 0;
    int empty = 1;
    while (j < SIZE)
    {
        if(map[SIZE-1][j] != 0)empty = 0;
        j++;
    }
    if(!empty){
        printf("YOU LOSE");
        return 0;
    }
    
    //shift array and place it in to copy array
    int i = 0;
    while (i < SIZE-1)
    {
        int j = 0;
        while (j < SIZE)
        {
            mapCopy[i+1][j] = map[i][j];
            j++;
        }
        i++;
    }
 
    
        //copy back the shifted array
    i = 0;
    while (i < SIZE)
    {
        int j = 0;
        while (j < SIZE)
        {
            map[i][j] = mapCopy[i][j];
            j++;        
        }
        i++;
    }
    
}

void verticalFlip(int map[SIZE][SIZE]){
    int mapCopy[SIZE][SIZE] = {EMPTY};

    //copy flipped to map copy
    int i = 0;
    while (i < SIZE)
    {
        int j = 0;
        while (j < SIZE)
        {
            mapCopy[i][j] = map[14-i][j];
            j++;        
        }
        i++;
    }
    //copy back to map
    i = 0;
    while (i < SIZE)
    {
        int j = 0;
        while (j < SIZE)
        {
            map[i][j] = mapCopy[i][j];
            j++;        
        }
        i++;
    }
}

void tnt(int map[SIZE][SIZE], int row,int column){
    //loop through element 
    //if distance <= 5 delete it 
    int i = 0;
    while (i < SIZE)
    {
        int j = 0;
        while (j < SIZE)
        {
            //find distance
            int distance = sqrt( (i-row)*(i-row) + (j-column)*(j-column) );
            //blast radius = 5
            if(distance <= 5)map[i][j] = 0;
            j++;        
        }
        i++;
    }
}

int wincondition(int map[SIZE][SIZE]){
     //check the map emptyness
        int empty = 0;
        int i = 0;
        while (i < SIZE)
        {
            int j =0;
            while (j < SIZE)
            {
                if(map[i][j]!= 0)empty = 1;
                j++;
            }
            i++;
        }
        if(empty == 0){
            printf("!!!!!YOU WIN!!!!");
            return 1;
        }
}


// can march only the destination empty 
//if the destination block also marching block it will not move
int marchingblock4(int map[SIZE][SIZE], int count){
    //mark the marhing block 
    int i = 0;
    while (i < SIZE)
    {
        int j = 0;
        while (j < SIZE)
        {
            if(map[i][j] == 4){
                //down
                if((count == 0)&&(map[i+1][j]==0)){
                    map[i+1][j] = 9;
                    map[i][j] = 0;
                }
                //right
                else if((count == 1)&&(map[i][j+1]==0)){
                    map[i][j+1] = 9;
                    map[i][j] = 0;
                }
                //down 
                else if((count == 2)&&(map[i+1][j]==0)){
                    map[i+1][j] = 9;
                    map[i][j] = 0;
                }
                //left
                else if((count == 3)&&(map[i][j-1]==0)){
                    map[i][j-1] = 9;
                    map[i][j] = 0;
                }
            }
            j++;
        }
        i++;
    }

    i = 0;
    while (i <SIZE)
    {
        int j = 0;
        while (j < SIZE)
        {
            if(map[i][j] == 9)map[i][j] = 4;
            j++;
        }
        i++;
    }
    


    
}





int controlPlayer(int map[SIZE][SIZE], int playerX){
    int command;
    int lose = 1;
    int marching = 0;
    int count = 0;
    
    while (scanf("%d",&command)!= EOF)
    {
        //control the player
        if(command == 4)movingPlayer(&playerX,command);//move left
        else if(command == 6)movingPlayer(&playerX,command);//move right
        else if(command == 5)firingLaser(map,playerX);//fire
        else if(command == 2)lose = shift(map,playerX);//shift the object down
        else if(command == 8)verticalFlip(map);
        marching++;

        if(marching == 3){
            marching = 0;
            shift(map,playerX);
        }

        

        
        /*
        printf("count = %d\n",count);
        marchingblock4(map,count);
        count++;
        if(count>3)count=0;
        */

        //object hit the player
        if(lose == 0)return 0;
        printMap(map,playerX);
        
        

        //check the map emptyness
        if(wincondition(map))return 0;
        
    }    

}



