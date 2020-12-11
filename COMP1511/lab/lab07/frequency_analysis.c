#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int main(){
    int c;
    double j = 0;
    int count[26] = {0};
    while ((c = getchar()) != EOF)
    {
       if(isupper(c))c = tolower(c);
        // upper = lowercase
        if ((c >= 'a')&&( c <= 'z'))
        {
            count[c-97]++;
            j++;
            double f = (count[c-97]/j);
            printf("%c frequency: %f\n",c,f);
        }
        
      
    }
    int i = 0;
    while (i < 26)
    {
        printf("%d",count[i]);
        i++;
    }
    
}