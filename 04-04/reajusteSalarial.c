// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{

    float salario, novosalario;
    printf("Qual seu salario? ");
    scanf("%f", &salario);
    if(salario < 1500.00)
    {
        novosalario = salario * 0.15 + salario;
        printf("O novo salario é de: %f", novosalario);
    }else
    {
        novosalario = salario * 0.10 + salario;
        printf("O novo salario é de: %f", novosalario);
    }
   
    
}

