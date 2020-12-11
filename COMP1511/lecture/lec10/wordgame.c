#include<stdio.h>
#define MAX_LENGTH 1000
int find_char(char c,char *line);

int main(void){
    //read string from users 
    char string1[MAX_LENGTH];
    printf("Enter first string: ");
    fgets(string1,MAX_LENGTH-1,stdin);
    //read second string 
    char string2[MAX_LENGTH];
    printf("Enter first string: ");
    fgets(string2,MAX_LENGTH-1,stdin);
    //return number for letter of second string in first string
    int i = 0;
    int char_count = 0;
    while (string2[i] != '\0')
    {
        if(find_char(string2[i],string1) != 0)char_count++;
        i++;
    }
    printf("they are %d same char in string1 and string2",char_count);
}

//function to return number of char c in string
int find_char(char c,char *line){
    int char_count = 0;
    int i = 0;
    while (line[i] != '\0')
    {
        if(line[i]=='\n');
        else if(line[i] == c)char_count++;
        i++;
    }
    return char_count;

}