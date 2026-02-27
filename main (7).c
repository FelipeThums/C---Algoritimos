// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{

    float a, b, c;
    
    printf("Informe os valores");

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    printf("A média desses números é %f", (a+b+c)/3);
    
    return 0;
    
}
