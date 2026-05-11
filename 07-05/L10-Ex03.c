#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    
    
    int vet[10][10];
    int numaleatorio;
    int soma = 0;
    int rec = 0;
    
    srand(time(NULL));
  
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 10; i++) {
            vet[j][i] = rand()  % 89 + 10;
            soma += vet[j][i];
            printf("%d ", vet[j][i]);
            if(rec <= soma){
                rec = soma;
            }
        }
        printf("= %d\n", soma);
        soma = 0;
    }
    
    printf("\nO maior é %d", rec);

    return 0;
}
