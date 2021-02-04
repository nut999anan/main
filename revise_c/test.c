//library
#include<stdio.h>  //standard library
#include<stdlib.h>  //memory
//constant
#define NUMBER 10
#define STRING hello
#define LENGTH 100
//function
//function decalration
int function(int parameter);
void print_array(int *arr,int length);


//structure
struct Book{
	char Author[LENGTH];
	char name[LENGTH];
	int year;
};

//main function 
int main(int argc, char **argv[]){
	//variable 
	int number = 7;
	//loop
	
	//for loop
    printf("for loop\n");
	for(int i = 0;i < 7;i++){
		printf("%d",i);
	}
    printf("\n");

    printf("while loop\n");
	int i = 0;
	while(i < 8){
		printf("%d",i);
        i++;
	}
    printf("\n");
	
	//pointers
    int data = 20;
    int *data_pointer = &data;
    printf("pointer of %d is %p",data,data_pointer);

    //array
    int arr[] = {1,2,3};
    print_array(arr,3);
     
}

//function decalration

//recieve parameter and return incremented value
int function(int parameter){
    return parameter + 1;
}


//recieve array and its length then print out the array
void print_array(int *arr,int length){
    printf("\narray: [");
    for(int i = 0;i < length;i++){
        printf(" %d",arr[i]);
    }
    printf(" ]");
}