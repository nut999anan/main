#include<stdio.h>
int main(){

    int row = 0 ,column = 0;
    int n = 9,m = n-1;
    while (row < n)
    {
        while (column < n)
        {
            if(column == m)
            {
                printf("*");
                m--;
            }
            
            else if (column == row)
            {
                printf("*");
            }

            else{
                printf(" ");
            }
            
            column++;
            
        }
        column = 0;
        printf("\n");
        row++;
    }
    
}