#include<stdio.h>
#define MAX 10000

int find_int(int number,int* string);

int main(){

    int number[MAX] = {0};
    int i = 0;
    while (scanf("%d",&number[i]) != -1)
    {
        i++;
    }
    int index  = 0;
    int max = 0;;
    while (index < i)
    {
        if(max < number[index])max = number[index];
        
        index++;
    }
    printf("max is %d",max);


    int j = 0;
    while (j < max)
    {
        if(!find_int(j,number))printf("%d\n",j);
        j++;
        /* code */
    }
    


    
    
    


    
    //find max number 

    //create array with that number
    //find missing value
    //print out missing value 
    
}


int find_int(int number,int* string){
    int i = 0;
    while (i < MAX)
    {
        if(string[i] == number)return 1;
        i++;
    }
    return 0;
}