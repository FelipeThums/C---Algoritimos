// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    
    int var1;
    
    srand(time(NULL));
    
    var1 = rand() % 100 +1;
    
    printf("%d", var1);
    
    if(var1 % 2 == 0){
        printf("\nè par");
    }else{
        printf("\né impa");
    }
    
    
    
}
