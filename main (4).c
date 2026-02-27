// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    float a,b,c;
    
    printf("Calculadora de Delta\n");
    
    printf("Informe os valores em Ordem, A, B, C\n");
    
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &c);
   
   printf("O valor de delta %f", (b *b) - (4 * a) * c);
   
    return 0;
    
}
