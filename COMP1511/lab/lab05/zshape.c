// Find the largest sum of numbers in a z shape.

#include <stdio.h>
#include <assert.h>

#define MAX_SIZE 100

int largest_z_sum(int size, int array[MAX_SIZE][MAX_SIZE]);
void print2dArray(int size,int array[MAX_SIZE][MAX_SIZE]);
int zSum(int size,int posR,int posC,int array[MAX_SIZE][MAX_SIZE]);

// DO NOT CHANGE THIS MAIN FUNCTION
int main(void) {
    int array[MAX_SIZE][MAX_SIZE];

    // Get the array size.
    int size;
    printf("Enter 2D array side length: ");
    scanf("%d", &size);
    assert(size >= 3);

    // Scan in values for the array.
    printf("Enter 2D array values:\n");
    int i = 0;
    while (i < size) {
        int j = 0;
        while (j < size) {
            assert(scanf("%d", &array[i][j]) == 1);
            j++;
        }
        i++;
    }
    //int largest_z_sum(int size, int array[MAX_SIZE][MAX_SIZE])
    int max = largest_z_sum(size,array);
    //print2dArray(3,array);
    //printf("The largest z sum is %d.\n", largest_z_sum(size, array));

    return 0;
}



// Return the largest sum of numbers in a z shape.
int largest_z_sum(int size, int array[MAX_SIZE][MAX_SIZE]) {
    //zSum(int size,int posR,int posC,int array[MAX_SIZE][MAX_SIZE])
    //loop through all size of zsum
        //loop through all index in z
            //check condition before calculate sum
    int sum = 0,max = 0;
    int zsize = 3;
    int i = 0 ,j =0;
    while (zsize <= size)
    {
        i = 0;
        j = 0;
        while (i < size)
        {
            j =0;//new row  
            while (j < size)
            {
                if((size - i >= zsize)&&(size - j >= zsize)){
                    sum = zSum(size,i,j,array);
                    printf("sum = %d\n",sum);
                    if(sum > max)max = sum;
                }
                j++;
            }
            i++;
        }
        zsize++;
    }
    printf("largest sum = %d",max);

    
    return 0;
}

int zSum(int size,int posR,int posC,int array[MAX_SIZE][MAX_SIZE]){
    //firstline
    int sum = 0;
    int firstline = 0;
    while (firstline < size - 1)
    {
        sum = sum + array[posR][posC];
        //array[posR][posC] = 0;
        posC++;
        firstline++;
    }
    
    //secondline
    int secondline = 0;
    while (secondline < size - 1)
    {
        sum = sum + array[posR][posC];
        //array[posR][posC] = 0;
        posR++;
        posC--;
        secondline++;
    }

    //thirdline
    int thirdline  = 0;
    while (thirdline < size)
    {
        sum = sum + array[posR][posC];
        //array[posR][posC] = 0;
        posC++;
        thirdline++;
    }
    
    print2dArray(size,array);
    return sum;
}


void print2dArray(int size,int array[MAX_SIZE][MAX_SIZE]){
    printf("\n2D array\n");
    int row = 0,column = 0;
    while (row < size)
    {
        column = 0;
        while (column < size)
        {
           printf("%d ",array[row][column]) ;
           column++;
        }
        row++;
        printf("\n");//next row
        /* code */
    }
      
}



