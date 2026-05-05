// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <stdbool.h>

int main()
{
    srand(time(NULL));
    
    int vet[100];
    
    for (int i = 0; i < 100; i++) {
        int sorteio = rand() % 100 + 1;
        vet[i] = sorteio;
        if(vet[i] % 10 == 0){
        printf("\nAqui tem uma quebra de Linha \n");
        }else{
        printf("\nposição: %d valor : %d", i , vet[i]);
        }
    }
        
    
}

