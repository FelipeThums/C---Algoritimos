// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int val1, val2, val3, validacao;
    printf("Insira o 1° lado do triangulo ");
    scanf("%d", &val1);
    printf("Insira o 2° lado do triangulo ");
    scanf("%d", &val2);
    printf("Insira o 3° lado do triangulo ");
    scanf("%d", &val3);
    if(val1 < val2 + val3 && val2 < val1 + val3 && val3 < val1 + val2){
        printf("pode fazer triangulo");
        if(val1 == val2 && val1 == val3 && val2 == val3){
            printf("\nEsse traingulo é Equilatero");
        }else {
            if(val1 == val2 || val1 == val3 || val2 == val3){
            printf("\nEsse traingulo é isoceles");
            }
        }
        if(val1 != val2 && val1 != val3 && val3 != val2){
        printf("\nEsse traingulo é escaleno");
            if(val1 * val1 == val2 * val2 + val3 * val3 || val2 * val2 == val1 * val1 + val3 * val3 || val3 * val3 == val2 * val2 + val1 * val1){
                printf("ele é retangulo");
            }
        }
    }else{
        printf("nn pode");
    }

    return 0;
}
