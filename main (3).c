// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    
    printf("Calculadora de volume de CILINDROS\n");
    
    float raio,altura;
    
    printf("Informe o Raio do Cilindro");
    scanf ("%f", &raio);
    printf("Qual a altura do cilindro?");
    scanf("%f", &altura);
    printf("o volume do Cilindro é de %f", 3.14 * (raio * raio) * altura);
   
   
    return 0;
    
}
