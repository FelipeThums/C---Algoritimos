#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    srand(time(NULL));

    int vet[10];
    bool repetido = false;

    for (int i = 0; i < 10; i++) {
        vet[i] = rand() % 10 + 1;
        printf("num[%d]: %d\n", i, vet[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int x = i + 1; x < 10; x++) {
            if (vet[i] == vet[x]) {
                repetido = true;
                printf("O valor %d na posicao %d é igual ao valor %d na posicao %d\n",
                       vet[i], i, vet[x], x);
            }
        }
    }

    if (repetido == true)
        printf("\nExistem valores repetidos\n");
    else
        printf("\nNao existem valores repetidos\n");

    return 0;
}