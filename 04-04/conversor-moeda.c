// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{

    float real, cot;
    printf("\t conversor de moeda");
    printf("\nQuantos reais quer converter? ");
    scanf("%f", &real);
    printf("Qual a cotação atual? ");
    scanf("%f", &cot);
    printf("\n o valor convertido é de: %.2f", real/cot);
}

