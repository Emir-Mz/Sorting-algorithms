#include <stdio.h>
#include <unistd.h> 
#include "algorithms.h"
#include "render.h"

int main(){
	
	int set[10] = {1,2,3,4,5,6,7,8,9,10};

    int random[10] = {7,3,9,1,6,10,2,8,5,4};
    
    save_screen();
    printf("\n");
    printblock(random);
    printa(random);
    printf("\n\n\n");
    sleep(2);

    mysort(random);
    sleep(2);
    restore_screen();
	
	return 0;
}