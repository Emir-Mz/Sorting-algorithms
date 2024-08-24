#include <stdio.h>
#include <unistd.h> 
#include "algorithms.h"
#include "render.h"

void save_screen() {
    system("tput smcup");
}

void restore_screen() {
    system("tput rmcup");
}

int main(){
	
	int set[10] = {1,2,3,4,5,6,7,8,9,10};

    int random[10] = {7,3,9,1,6,10,2,8,5,4};
    
    save_screen();
    printf("\n");
    printblock(random);
    printa(random);
    printf("\n");
    sleep(2);

    mysort(random);

    printf("\n");
    printa(random);
    printf("\n");
    printblock(random);
    printa(random);
    
    printf("\n");
    sleep(2);
    restore_screen();
	
	return 0;
}