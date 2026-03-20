// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

   int val1, val2, guess1, guess2;
    
    srand(time(NULL));
    
    val1 = rand() % 5 +1;
    val2 = rand() % 5 +1;

    //printf("%d\n", val1); //---- Caso Queira validar -----
   // printf("%d", val2);
    
    printf("\nTente adivinhar os dois números sorteados");
    printf("\nQual sua primeira escolha?");
    scanf("%d", &guess1);
    printf("\nQual sua segunda escolha?");
    scanf("%d", &guess2);
    if(val1 == guess1 && val2 == guess2 || val1 == guess2 && val2 == guess1){
        printf("Correto");
    }else{
        printf("Errado os números eram: %d e %d", val1, val2);
    }
  
    return 0; 

    
}

