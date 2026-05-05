// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <stdbool.h>

int main()
{
    srand(time(NULL));
    
    int vet[100];
    int media = 0;
    for (int i = 0; i < 100; i++) {
        
        int sorteio = rand() % 100 + 1;
        vet[i] = sorteio;
        printf("\no %d número é: %d", i + 1, sorteio);
        media += vet[i];
    }
    
    media = media/100;
    
    printf("\na média é: %d", media);
    
    printf("\nNúmeros acima da média");
    for (int i = 0; i < 100; i++) {
        if(vet[i] > media)
        printf("\n%d", vet[i]);
        
    }
        
    
}

