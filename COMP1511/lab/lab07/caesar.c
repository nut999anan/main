#include <stdio.h>
#include<string.h>

#define MAX_LENGTH 1000
#define LINE 4096
void caesar();
void inverseCaesar();





int main(void) {
    caesar();
    inverseCaesar();
}

void caesar(){
    int caesar = 0;
    printf("Please enter number: ");
    scanf("%d",&caesar);
    printf("ceasar shift - %d",caesar);

    int c;
    while ( (c = getchar()) !=EOF )
    {

        if(c == '\n')printf("\n");
        if((c >= 'a')&&(c <= 'z')){
            c = c- caesar;
            if(c < 'a')c = 'z' + (c - 'a') + 1;
            printf("%c",c);
        }
        
    }
}

void inverseCaesar(){
    int caesar = 0;
    printf("Please enter number: ");
    scanf("%d",&caesar);
    printf("inverse ceasar shift  %d",caesar);

    int c;
    while ( (c = getchar()) !=EOF )
    {

        if(c == '\n')printf("\n");
        if((c >= 'a')&&(c <= 'z')){
            c = c + caesar;
            if(c > 'z')c = 'a' + (c - 'z') - 1;
            printf("%c",c);
        }
        
    }
}






