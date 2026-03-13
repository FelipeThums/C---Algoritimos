// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int val1, val2, val3;
    printf("Insira o 1° lado do triangulo ");
    scanf("%d", &val1);
    printf("Insira o 2° lado do triangulo ");
    scanf("%d", &val2);
    printf("Insira o 3° lado do triangulo ");
    scanf("%d", &val3);
    
    
    
    if(val1 > val2 + val3 || val2 > val1 + val3 || val3 > val1 + val2){
        printf("pode fazer triangulo");
    }else{
        printf("Não pode fazer triangulo");
    }

    return 0;
}
