// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int val1;
    printf("Digite o Primeiro Número : ");
    scanf("%d", &val1);

    if(val1 % 10 == 0){
        printf("é Multiplo de 10");
    }
    
    return 0; 
}
