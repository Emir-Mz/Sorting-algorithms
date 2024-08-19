#include <stdio.h>
#include <unistd.h> 
#include "render.h"

void swap(int *first, int *second){
    int temp = *first;

    *first = *second;

    *second = temp;

}

void mysort(int set[10]){

    int finish = 1;
    int iteration = 0;

    for (int i = 0; i < 10; i++)
    {
        finish = 1;
        
        for (int j = 0; j < 9; j++)
        {   
            usleep(50000);
            printblock(set);
            printest(set, j, j+1, 1);
            if (set[j] > set[j+1])
            {
                usleep(50000);
                swap(&set[j], &set[j+1]);
                printblock(set);
                printest(set, j, j+1, 0);
                finish = 0;
            }
        }
        iteration++;
        if (finish == 1)
        {
            break;
        }
    }
    printf("\npiterations: %d\n", iteration);  
}