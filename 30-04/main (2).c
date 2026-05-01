// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
     int x[10];
    int num = 0;
    int media = 0;
    int soma = 0;
    srand(time(NULL));
    
    for (int i = 0; i < 10; i++) {
        num = rand() % 10 + 1;
        printf("\n%d", num);
        x[i] = num;
    }
    for (int i = 8; i < 10; i++) {
        media += x[i];
    }
    printf("\n a média é = %d", media /2);
    
    for (int i = 0; i < 10; i++) {
        if(x[i] < media){
            soma += x[i];
        }
    }
    
    printf("\n%d", soma);
    return 0;
}
