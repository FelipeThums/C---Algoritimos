// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <stdbool.h>

int main()
{
    int vet[5];
    int num = 0;
    int media = 0;
    for (int i = 0; i < 5; i++) {
        
        printf("\nInforme o %d número : ", i + 1);
        scanf("%d", &num);
        vet[i] = num;
        media += num;
    }
    
    media = media/5;
    
    printf("Números informados acima da média");
    for (int i = 0; i < 5; i++) {
        if(vet[i] > media){
        printf("\n%d", vet[i]);
        }
    }
        
    
}

