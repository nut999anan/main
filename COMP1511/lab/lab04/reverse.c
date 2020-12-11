#include<stdio.h>
#define MAX 100
int main(){
   int array[MAX];
   int n = 0; // number of input
   int*pa = array;
   printf("Enter: ");
   while (scanf("%d",pa) != EOF)
   {
       pa++;
       n++;
   }
   pa--;
   n--;
   while (n >= 0 )
   {
       printf("%d\n",*pa);
       pa--;
       n--;
   }
   
   
    


}
