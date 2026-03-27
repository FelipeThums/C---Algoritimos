// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int resp1, resp2, resp3, cont;
    cont = 0;
    printf("\t ----------- Quiz do Lula -----------");
    printf("\nQual o personagem principal de How i met your mother? \n 1 - ted \n 2 - barney \n 3 - marshall \n");
    scanf("%d", &resp1);
    if(resp1 == 1)
    {
        cont++;
        printf("Correto!");
    }else{
        printf("Errado a resposta é ted");
    }
    
    printf("\nem how i met your mother a lily é casada com? \n 1 - ted \n 2 - barney \n 3 - marshall \n");
    scanf("\n%d", &resp2);
    if(resp2 == 3)
    {
        cont++;
        printf("Correto!");
    }
    else
    {
        printf("Errado a resposta é marshall");
    }
    printf("\nqual o nome da outra mulher de How i met your mother? \n 1 - robin \n 2 - ashley \n 3 - megan \n");
    scanf("\n%d", &resp3);
    if(resp3 == 1)
    {
        cont++;
        printf("Correto!");
    }
    else
    {
        printf("Errado a resposta é robin\n");
    }
    printf("parábens você acertou: %d", cont);
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
