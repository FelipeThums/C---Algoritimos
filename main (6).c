// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    float celsius;
    
    printf("Transformar C em F");
    
    printf("Informe o valor em Graus celsius\n");
    
    scanf("%f", &celsius);
    
    printf("O valor em Fahrenheit é de %f", (celsius * 1.8) + 32);
    
    return 0;
    
}
