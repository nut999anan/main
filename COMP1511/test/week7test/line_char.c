// Anan Mingmitpattanakul z5331054
// written in 31/10/2020

#include<stdio.h>
#include<string.h>

#define MAXLINE 257
//function
int find_char(char *string,char character);

int main(){
    int position;
    scanf("%d\n",&position);
    char line[MAXLINE];
    fgets(line,MAXLINE-1,stdin);
    printf("The character in position %d is '%c'",position,line[position]);


}

