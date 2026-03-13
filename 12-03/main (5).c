// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int val1;
    
    printf("Insira um numero");
    
    scanf("%d", &val1);
    
    if(val1 >= 40){
        if(val1 % 5 == 0 && val1 % 7 == 0)
        printf("parabens");
    }

    return 0;
}
