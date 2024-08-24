#include <stdio.h>

void printa(int set[10]){

    for(int i = 0; i < 10; i++){
        printf("%d ", set[i]);
    };
    
}

void printest(int set[10], int u, int o, int before){

    
    
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
        for (int j = 0; j < 10; j++)
        {
            if (set[j] >= 10-(i))
            {
                printf("# ");
            }
            else
            {
                printf(". ");
            }
            
        }
        printf("\n");
    }
    

}