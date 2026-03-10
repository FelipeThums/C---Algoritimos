// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    printf("Digite um valor : ");
    int val1;
    scanf("%d", &val1);
    if(val1 % 2 == 0)
    {
    printf("é Par");
    }else {
        printf("é Impar");
    }
    return 0; 
}
