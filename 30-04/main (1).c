// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int x[100];
    int num = 0;
    int media = 0;
    srand(time(NULL));
    
    for (int i = 0; i < 100; i++) {
        num = rand() % 1000 + 1;
        printf("\n%d", num);
        x[i] = num;
    }
    for (int i = 0; i < 100; i++) {
        media += x[i];
    }
    printf("\n a média é = %d", media /100);
    
    
    
   
    
    
    return 0;
}
