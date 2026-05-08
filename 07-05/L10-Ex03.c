// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    
    
    int vet[20][20];
    int numaleatorio;
    int soma = 0;
    
    srand(time(NULL));
  
    for (int j = 0; j < 20; j++) {
        for (int i = 0; i < 20; i++) {
            vet[j][i] = rand()  % 89 + 10;
            soma += vet[j][i];
            printf("%d ", vet[j][i]);
        }
        printf("= %d\n", soma);
        soma = 0;
    }

    return 0;
}
