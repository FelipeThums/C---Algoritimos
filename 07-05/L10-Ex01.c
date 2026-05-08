// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    
    int vet[3][3];
    
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            if(j == 1 && i == 1){
                vet [j][i] = 9;
            }
            
        }
    }
     for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            printf("%d", vet[j][i]);
        }
        printf("\n");
     }
     
    
    
    
    return 0;
}
