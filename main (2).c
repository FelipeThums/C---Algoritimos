// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    

    
    printf("Seja bem vindo ao dashboard de ganhos\n");
    
    int homem, mulher;
    printf("Informe quantas mulheres vieram a festa ");
    scanf("%d", &mulher);
       printf("Informe quantos homens vieram a festa ");
    scanf("%d", &homem);
    
  
    printf("O total arrecadado na festa foi de %d R$ ", (homem * 20)+(mulher*17));

    return 0;
    
}
