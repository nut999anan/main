#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int main(){
    char c;
    while ((c = getchar()) != EOF)
    {
       if(isupper(c))putchar(tolower(c));
       else if(islower(c))putchar(toupper(c));
      
    }
}