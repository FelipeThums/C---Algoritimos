// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int a;
    
    printf("verificação de número par\n");
    
    printf("Informe o valor para a verificação\n");
    
    scanf ("%d", &a);
    
    printf("\ncaso o valor final seja 0 - é par, caso seja 1 - é impar");
    
    
   
   printf("\nO valor é %d", a%2);
   
   
    return 0;
    
}
