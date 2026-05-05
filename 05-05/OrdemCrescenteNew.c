// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <stdbool.h>

int main()
{
    srand(time(NULL));
    
    int vet[5];
    bool crescente = true;
    
    
    for (int i = 0; i < 5; i++) {
        int sorteio = rand() % 100 + 1;
        vet[i] = sorteio;
        printf("num: %d \n", vet[i]);
    }
    
    for (int i = 0; i < 4; i++) {
        if(vet[i] > vet[i + 1]){
            crescente = false;
        }
    }
    
    if(crescente == true){
        printf("\nta em ordem crescente");
    }else{
        printf("\nnao ta em ordem crescente");
    }

}

