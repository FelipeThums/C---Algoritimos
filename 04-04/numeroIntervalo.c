// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{

    int num;
    printf("Envie um número: ");
    scanf("%d", &num);
    if(num >= 100 && num <= 200)
    {
        printf("Esta no intervalo");
    }else
    {
        printf("não Esta no intervalo");
    }
   
    
}

