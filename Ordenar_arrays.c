// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int a[5] = {4,3,9,8,7};
    
    int i = 0;
    int vdd = 1;
    int b = 0;
    int c = 0;
    
    do{
        vdd = 0;
        for (int i = 0; i < 4; i++) {
             if(a[i] > a [i + 1])
        {
            b = a[i];
            c = a[i +1];
            a[i] = c;
            a[i + 1] = b;
            
            vdd = 1;
            
        }
        }
        
     
        
    
    }while(vdd == 1);
    
    
    for (int i = 0; i < a[i]; i++) {
                printf("Posição - %d\n", a[i]);
        }
 
}
