// A program to track statistics of pets
// Written for COMP1511 tutorials by 
// Marc Chee (marc.chee@unsw.edu.au)
// July 2019


#include<ctype.h>
#include <stdio.h>
#include<string.h>
void lower_string(char *string);



int main(int argc, char *argv[]) {
    int i = 1;
    while (i < argc)
    {
        lower_string(argv[i]);
        printf("%s",argv[i]);
        i++;
    }
    
  
  
}

void lower_string(char *string){
    int i = 0;
    while (string[i] != '\0')
    {
        string[i] = tolower(string[i]);
        i++;
    }
    
}





