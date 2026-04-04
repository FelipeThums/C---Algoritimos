// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{

    float p1, p2;
    printf("Qual foi sua nota na P1? ");
    scanf("%f", &p1);
    printf("Qual foi sua nota na P2? ");
    scanf("%f", &p2);
    printf("Média Final: %f", p1 * 0.4 + p2 * 0.6);

}

