// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    

    
    printf("Seja bem vindo a calculadora de gastos\n");
    
    float distancia, combustivel;
    printf("Informe a distancia percorrida em metros : ");
    scanf("%f", &distancia);
    printf("Informe quanto de combustivel gastou em litros : ");
    scanf("%f", &combustivel);
    
   // printf("Essa é a média de consumo do seu carro, %f", distancia/combustivel);
    printf("seu carro fez %.2f Km/L ", distancia/combustivel);

    return 0;
    
}
