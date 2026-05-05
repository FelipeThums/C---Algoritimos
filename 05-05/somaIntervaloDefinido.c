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
    int soma = 0;
    
    //lastro responsavel por criar os 100 numéros
    //e armazenar cada um em uma posição no array
    
    for (int i = 0; i < 100; i++) {
        int sorteio = rand() % 100 + 1;
        vet[i] = sorteio;
        printf("\nposição: %d valor : %d", i , vet[i]);
    }
    
    //lastro que define as casas que serão somadas
    
    for (int i = 0; i <= 10; i++) {
    // definindo a partir de qual posição a media sera calculada
       media += vet[i + 89];
    }
    
   media = media /10;
    
    printf("\na média é: %d", media);
    //lastro para verificiar quem está acima da média
    
    
    for (int i = 0; i < 100; i++) {
        if(vet[i] < media)
        soma += vet[i];
        
    }
    printf("\nsoma dos menores que a média é %d", soma);
        
    
}

