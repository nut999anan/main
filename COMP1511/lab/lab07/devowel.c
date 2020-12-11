#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    int c;
    char vowel[] = "aeiou";
    while ((c = getchar())!= EOF)
    {
        int i = 0;
        int isvowel = 0;
        while (i < 6)
        {
            if(vowel[i] == c)isvowel = 1;
            i++;
        }
        if(!isvowel)putchar(c);
        
    }
    
}