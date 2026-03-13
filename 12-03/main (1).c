// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{

    printf("Insira um número ");
    
    int val1;
    
    scanf("%d", &val1);
    
    if(val1 >= 15 && val1 <= 25 || val1 >= 45 && val1 <= 50){
        printf("erro");
    }

    return 0;
}
