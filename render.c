#include <stdio.h>
#include <stdlib.h>

void clear_screen() {
 
    printf("\033[2J");
    
    printf("\033[H");
}

void save_screen() {
    system("tput smcup"); 
}

void restore_screen() {
    system("tput rmcup"); 
}


void printa(int set[10]){
    printf("\t");
    for(int i = 0; i < 10; i++){
        printf("%d ", set[i]);
    };
    
}

void printest(int set[10], int u, int o, int before){

    
    printf("\t");

    for(int i = 0; i < 10; i++){
        if (i == u && before == 1) {
            printf("\e[0;32m%d \e[0m", set[i]);
        }
        else if (i == o && before == 1) {
            printf("\e[0;31m%d \e[0m", set[i]);
        }
        else if (i == u && before == 0) {
            printf("\e[0;31m%d \e[0m", set[i]); 
        }
        else if (i == o && before == 0) {
            printf("\e[0;32m%d \e[0m", set[i]); 
        }
        else {
            printf("%d ", set[i]);  
        }
    }

    printf("\n");
    
}

void printblock(int set[10]){

    printf("\n\n\n\n\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\t");
        for (int j = 0; j < 10; j++)
        {
            if (set[j] >= 10-(i))
            {
                printf("# ");
            }
            else
            {
                printf("\x1b[30m. \x1b[0m");
            }
            
        }
        printf("\n");
    }
    

}