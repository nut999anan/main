#include<stdio.h>
int main(void){
    char c = 0;
    printf("type in character or string: ");
    while ((c = getchar()) != EOF)
    {
       if(c == '\n')printf("char \\n recieved with %d ASCII value\n",c,c);
       else printf("char %c recieved with %d ASCII value\n",c,c);
       
       
    }
    

}