// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int palp, sort;
    
    srand(time(NULL));
    sort = rand() % 20 + 1;
    printf("Qual seu palpite?");
    scanf("%d", &palp);
    printf("%d", sort);
    if(palp == sort)
    {
        printf("\nAcertou!");
    }else
    {
        if(palp > sort)
        {
          printf("\nseu palpite foi maior!");  
        }else
        {
            printf("\nseu palpite foi menor!");  
        }
    }
}

