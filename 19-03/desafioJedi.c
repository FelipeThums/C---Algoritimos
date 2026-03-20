// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   int val1, escolha, numero, verificacao;
    srand(time(NULL));
    escolha = 0;
    val1 = rand() % 5 +1;
    printf("%d\n", val1);
    printf("Vamos jogar pár ou impár voçê quer ser? \n 1 - pár \n 2 - Impár \n");
    scanf("%d", &escolha);
    printf(" \n Qual seu número?");
    scanf("%d", &numero);
    verificacao = val1 + numero;
    if(verificacao % 2 == 0 && escolha == 1)
    {
        printf("\nganhou");
    }else
    {
        if(verificacao % 2 == 1 && escolha == 2)
        {
           printf("\nganhou");
        }else{
        printf("\nperdeu");
        }
    }
    
    

}

