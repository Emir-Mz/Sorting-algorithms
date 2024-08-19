#include <stdio.h>
#include <unistd.h> 
#include "algorithms.h"
#include "render.h"

int main(){
	
	int set[10] = {1,2,3,4,5,6,7,8,9,10};

    int random[10] = {7,3,9,1,6,10,2,8,5,4};
    
    printf("\n");
    printa(random);
    printblock(random);
    printf("\n");
    sleep(1);

    mysort(random);

    printf("\n");
    printa(random);
    printf("\n");
    printblock(random);
    printf("\n\n");
	
	return 0;
}