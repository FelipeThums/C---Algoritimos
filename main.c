// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    

    
    printf("Seja bem vindo a calculadora de média\n");
    
    float nota1, nota2;
    printf("Informe sua primeira nota : ");
    scanf("%f", &nota1);
    printf("Informe sua Segunda nota : ");
    scanf("%f", &nota2);
    
    printf("Essa é sua média, %f", (nota1+nota2)/2);

    return 0;
    
}
