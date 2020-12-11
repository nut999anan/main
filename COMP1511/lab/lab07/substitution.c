#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000
#define LINE 4096
#define ALPHABET_SIZE 26

//substitution chipper
//recieve string
//string1 = abcde
//string2 = asdlk
//decrypting 2->1
//encrypting 1->2

int convert(char c,char* string1,char* string2);


int main(void) {
    //create normal alphabet string
    //recieve string from terminal
    char standard[ALPHABET_SIZE] = "abcdefghijklmnopqrstuvwxyz";
    //fputs(standard,stdout);
    

    char encrypt[ALPHABET_SIZE] ="cbadefghijklmnopqrstuvwxyz";
    //printf("Please enter encrypt code: ");
    //fgets(encrypt,ALPHABET_SIZE,stdin);
    //fputs(encrypt,stdout);
    
    printf("enter\n");

    int i = 0;
    while (i < ALPHABET_SIZE)
    {
        if(encrypt[i] == ' '){printf("\n\nfound %d",i);return 0;}
        i++;
    }
    
    //char string1[] = "123456";
    //char string2[] = "956321";
    //printf("convert from %c to %c",'5',convert('5',string1,string2));
    char c;
    while ((c = getchar()) != EOF)
    {
        if(c == '\n')printf("\n");
        if((c >= 'a') && (c <= 'z'))printf("%c",convert(c,standard,encrypt));
        
    }
    
    
    
    
    

}

//find char in string and return index



// convert
//find element in input string 
//convert to others
int convert(char c,char* string1,char* string2){
    int i = 0;

    //find char in string 1 and return index
    while (i < ALPHABET_SIZE)
    {
        
        if( c == string1[i] )return string2[i];
        i++;
    }
    
}


