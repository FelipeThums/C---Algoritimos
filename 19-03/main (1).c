// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    int val1, val2, val3;
    
    srand(time(NULL));
    
    val1 = rand() % 10 +1;
    val2 = rand() % 10 +1;
    val3 = rand() % 10 +1;
    
    printf("o 1° lado do triangulo é ");
    printf("%d", val1);
    printf("\no 2° lado do triangulo é ");
    printf("%d", val2);
    printf("\no 3° lado do triangulo é ");
    printf("%d",val3);
    if(val1 < val2 + val3 && val2 < val1 + val3 && val3 < val1 + val2){
        printf("\npode fazer triangulo");
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
                printf("\nele é retangulo");
            }
        }
    }else{
        printf("\nnn pode");
    }
    
    
 
    
   
    }
    
    
    

