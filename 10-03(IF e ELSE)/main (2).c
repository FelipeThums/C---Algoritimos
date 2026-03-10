// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int val1, val2;
    printf("Digite o Primeiro Número : ");
    scanf("%d", &val1);
    printf("Digite o Segundo Número : ");
    
    
    
    scanf("%d", &val2);
    
    if(val2 != val1){
        printf("O maior é: ");
    if(val1 >= val2)
    {
    printf("%d", val1);
    }else {
        printf("%d", val2);
    }
    }else {
        printf("Não pode numeros iguas");
    }
    
    return 0; 
}
