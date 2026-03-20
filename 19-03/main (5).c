// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   int val1, val2, count;
    srand(time(NULL));
    count = 0;
    val1 = rand() % 10 +1;
    val2 = rand() % 10 +1;
    printf("%d\n", val1); //---- Caso Queira validar -----
    printf("%d", val2);
    printf("\n A qauntidade de números sorteados entre 3 e 7 é: ");
    if(val1 >= 3 && val1 <= 7){
        count = count +1;
    }
    if(val2 >= 3 && val2 <= 7){
        count = count +1;
    }
    printf("%d", count);
    return 0; 
}

