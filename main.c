#include <stdio.h>
#include <unistd.h> 

void printa(int set[10]){

    for(int i = 0; i < 10; i++){
        printf("%d ", set[i]);
    };
    
}

void printest(int set[10], int u, int o, int before){

    printf("\n\n\n\n\n\n");

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

void swap(int *first, int *second){
    int temp = *first;

    *first = *second;

    *second = temp;

}

void mysort(int set[10]){

    int finish = 1;
    int process = 1;

    for (int i = 0; i < 10; i++)
    {
        finish = 1;
        
        for (int j = 0; j < 9; j++)
        {   
            usleep(50000);
            printest(set, j, j+1, 1);
            if (set[j] > set[j+1])
            {
                usleep(50000);
                swap(&set[j], &set[j+1]);
                printest(set, j, j+1, 0);
                finish = 0;
            }
            
            
        }
        process++;
        if (finish == 1)
        {
            break;
        }
        
        
        
    }

    printf("\nprocessed times: %d", process);
    
}

int main(){
	
	int set[10] = {1,2,3,4,5,6,7,8,9,10};

    int random[10] = {7,3,9,1,6,10,2,8,5,4};
    
    printf("\n");
    printa(random);
    printf("\n");
    sleep(2 );

    mysort(random);

    printf("\n");
    printa(random);
    printf("\n\n");
	
	return 0;
}