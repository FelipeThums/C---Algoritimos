// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{

    int num1, num2,num3;
    printf("Entre com 3 Números: ");
    scanf("%d", &num1);
    scanf("\n%d", &num2);
    scanf("\n%d", &num3);
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("o maior é: %d", num1);
        }else
        {
            printf("o maior é: %d", num3);
        }
    }else
    {
        if(num2 > num3)
        {
            printf("o maior é: %d", num2);
        }else{
            printf("o maior é: %d", num3);
        }
    

}

