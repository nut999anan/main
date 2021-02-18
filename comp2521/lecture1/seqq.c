//This program accept three parameters from the
//the command line and print  out
//corressponding sequence 
// first parameter in the start value
// second parameter is the interval
// default of second parameter is 1
// third parameter is the end value
#include<stdio.h>
#include<stdlib.h>


int main (int argc, char *argv[]) {
    //accept three parameter 
    //start interval end
    int start;
    int interval = 1;
    int end;

    if ( argc == 3){
        //start and end
        start = atoi(argv[1]);
        end = atoi(argv[2]);
        
    } else if (argc == 4) {
        //start interval end
        start = atoi(argv[1]);
        interval = atoi(argv[2]);
        end = atoi(argv[3]);

    } else if (argc == 2){
        start = atoi(argv[1]);
        end = 0;
    }
    //printf("start: %d interval: %d end %d",start,interval,end);
    
    for(start;start <= end;start = start + interval){
        printf("%d ",start);
    }

}
