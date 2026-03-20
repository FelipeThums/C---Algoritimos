// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    int val1, try1, try2;
    
    srand(time(NULL));
    
    val1 = rand() % 10 +1;

        //printf("%d", val1); ---- Caso Queira validar -----

    printf("Qual sua primeira tentativa?");
    scanf("%d", &try1);
    
    if(try1 == val1){
        printf("Krlh c é foda");
    }
    else
    {   
        if(try1 > val1){
            printf("é um número menor");
        }else{
            printf("é um número maior");
        }
        printf("\nQual sua segunda tentativa?");
            scanf("%d", &try2);
        if(try2 == val1)
        {
            printf("Krlh c é fododinha");
        }
        else{
            printf("Burro errou as duas");
        }
        printf("%d", val1);
        
    }
}
    
    
    

