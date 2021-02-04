#include <stdio.h>
int main(int argc,char *argv[]){
  int array[] = {2,4,7,17,154,1,45};
  int *arr = array;
  for(int i =0;i<7;i++){
      printf("%d ",*arr);
      arr++;
  }

}