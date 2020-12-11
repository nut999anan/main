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
   n--;
   printf("station 1\n");
   int fuel = array[0];
   printf("fuel = %d\n",fuel);
   int i = 0;//index
   int station = 1;
   //printf("n = %d",n);
   while (i < n -1)
   {
       i++;//move to next station
       printf("staion %d \n",i+1);
       //printf("i = %d",i);
       fuel--; //lose fuel
       printf("lose fuel = %d\n",fuel);

       //recharge fuel
       if(fuel == 0 && array[i] != 0){
           fuel = array[i];
           printf(" recharge fuel = %d\n",fuel);
           station++; //station count  
           printf("charged %d\n",station);  
       }
       else
       {
           printf("can't reach");
           return 0;
       }
       
       
       
   }
   printf("station needed = %d",station);


   

}
