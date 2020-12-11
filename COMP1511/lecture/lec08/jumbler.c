#include<stdio.h>
//Anan Mingmitpattanalul z5331084 DD/MM/YY
//Jumbler
//demo program of pointer and funciton use.
#define MAX_INPUT 100

int readInput(int array[MAX_INPUT]);
void printArray(int length,int array[length]);
void swap_nums(int *num1,int *num2);
void jumple(int length,int array[MAX_INPUT]);


int main(void){
    int nums[MAX_INPUT] = {0};

    //read inputs
    int input_size = readInput(nums);
    printArray(input_size,nums);

    //swap two numbers
    swap_nums(&nums[0],&nums[1]);
    printArray(input_size,nums);

    //swap several numbers
    jumple(input_size,nums);
    printArray(input_size,nums);
    


}

//read input by stdio.h ,store in  array, and return count
int readInput(int array[MAX_INPUT]){
    
    int i = 0;
    int max = 0;
    printf("How many numbers:  ");
    scanf("%d",&max);
    printf("Enter number:  ");
    while (i < max)
    {
        scanf("%d",&array[i]);
        i++;
    }
    return i ;//input number

    
}

//print array[lenth]
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

//swap two numbers in memory at num1 and num2
void swap_nums(int *num1,int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

//jumple the program to change order of numbers in input
void jumple(int length,int array[MAX_INPUT]){
    int i = 0;
    while (i < length)
    {
        int j = (i*2) % length;//modulus bound value [0,length]
        swap_nums(&array[i],&array[j]);
        printArray(length,array);
        printf("i = %d",i);
        i++;
        
    }
    

}