#include<stdio.h>

int common_elements(int length, int source1[length], int source2[length], int destination[length]);
void printArray(int length, int array[length]);

int main(){
    int source1[6] = {1, 4, 1, 5, 9, 2};
    int source2[6] = {1, 1, 8, 2, 5, 3};
    int destination[6] = {0};
    common_elements(6,source1,source2,destination);
    printArray(6,destination);


}



int common_elements(int length, int source1[length], int source2[length], int destination[length]) {
    int same = 0;//couting same element 
    int i = 0,j = 0,k = 0; // skim through each element one by one 
    while (i < length)
    {
        j = 0;
        while (j < length)
        {
            if(source1[i] == source2[j]){
                destination[k] = source1[i];
                printf("i = %d, j = %d\n",i,j);
                printf("source1 = %d source2 = %d\n",source1[i],source2[j]);
                k++;
                j = length;
                same++;
            }
            //printf("i = %d, j = %d\n",i,j);
            //printf("source1 = %d source2 = %d\n",source1[i],source2[j]);
            j++;       
        }
        i++;
    }
    



    return same;
}

void printArray(int length,int array[length]){
    int i = 0;
    printf("Array = [ ");
    while (i < length)
    {
        printf("%d ",array[i]);
        i++;
    }
    printf("]\n");
    
}