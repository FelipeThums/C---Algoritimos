// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int defConta;
    float valor1, valor2;
    
    printf("\t ---Seja Bem vindo a calculadora em C---");
    printf("Qual Operação quer fazer? \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n");
    
    scanf("%d", &defConta);
    
    if(defConta == 1){
        printf("Informe os valores a serem somados\n");
        scanf("%f", &valor1);
        scanf("%f", &valor2);
        printf("O resultado de %.2f + %.2f é %.2f", valor1, valor2, valor1+valor2);
    } else if (defConta == 2){
         printf("Informe os valores a serem Subtraidos\n");
        scanf("%f", &valor1);
        scanf("%f", &valor2);
        printf("O resultado de %.2f - %.2f é %.2f", valor1, valor2, valor1-valor2);
    } else if(defConta == 3){
        printf("Informe os valores a serem Multiplicados\n");
        scanf("%f", &valor1);
        scanf("%f", &valor2);
        printf("O resultado de %.2f * %.2f é %.2f", valor1, valor2, valor1*valor2);
    } else if (defConta == 4){
        printf("Informe os valores a serem Divididos\n");
        scanf("%f", &valor1);
        scanf("%f", &valor2);
        printf("O resultado de %.2f / %.2f é %.2f", valor1, valor2, valor1/valor2);
    }else{
        printf("Informe uma operação valida");
    }
    
    return 0;
}
