#include<stdio.h>


void interject(char *str, char *interject, int index);

int main(){
    char str[] = "Comp Science";
    interject(str, "uter", 3);


}

void interject(char *str, char *interject, int index){
    char string_copy[100];
    
    //copy string until index 
    int c_index = 0;//string copy index
    int s_index = 0;//str index
    while (s_index <= index)
    {
        string_copy[c_index] = str[s_index];
        printf("%c",string_copy[c_index]);

        s_index++;
        c_index++;
    }
    //write word after that then continue copy itk
    int i_index = 0;
    while (interject[i_index] != '\0')
    {
        string_copy[c_index] = interject[i_index];
        printf("%c",string_copy[c_index]);

        c_index++;
        i_index++;
    }
    
    while (str[s_index] != '\0')
    {
        string_copy[c_index] = str[s_index];
        printf("%c",string_copy[c_index]);

        c_index++;
        s_index++;
    }

    int i = 0;
    while (i <= c_index)
    {
        str[i] = string_copy[i];
        i++;
    }
    
    
   
    
    //copy back to original string
    

}