// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{

    int num;
    printf("Escolha um numero: ");
    scanf("%d", &num);
    if(num % 3 == 0 && num % 5 == 0)
    {
        printf("é multiplo de 3 e 5");
    }else
    {
        printf("Não é");
    }
    
}

