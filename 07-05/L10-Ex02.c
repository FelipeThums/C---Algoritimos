// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    
    
    int vet[10][10];
    int col;
    int lin;
    
    srand(time(NULL));
    
    col = rand() % 10;
    lin = rand() % 10;
    
    
    
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {
            vet[j][i] = 8;
             vet[col][lin] = 0;
             printf("%d", vet[j][i]);
        }
        printf("\n");
    }
    
   
 
     
    
    
    
    return 0;
}
