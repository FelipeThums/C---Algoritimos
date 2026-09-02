// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<string.h>

//Structs para armazenar dados do que eu quero criar (personagens)

typedef struct Heroi{
    char nome[50];
    int dano;
    int vida;
}Heroi;

typedef struct Monstros{
    
    int dano;
    int vida;
    int defesa;
    
}Monstros;

//funções para criar meus personagens

void CriarMonstros(Monstros *novoM,int dano,int vida, int defesa){
    novoM->dano = dano;
    novoM->vida = vida;
    novoM->defesa = defesa;
}
void CriarHeroi(Heroi *novoH, char nome[], int dano, int vida){

    strcpy(novoH-> nome, nome);
    novoH->dano = dano;
    novoH->vida = vida;
    
}

//função de decisão do HIT (Golpes    Monstro<----->Heroi)

void danoGrande(Heroi *heroi, Monstros *monstro){
    
    int i = 0;
    
    do{
        
        if(heroi->vida > 1){
            heroi->vida -= monstro->dano;
            printf("\nBatendo!! vida Atual: %d", heroi->vida);
            int i = 1;
        }else{
            //printf("%d", heroi->vida);
            
            int i = 0;
        }
        
    }while(i != 1);
    
}


int main()
{
    
    Heroi novo[1];
    Monstros fase[3];
    CriarHeroi(&novo[0], "Lula", 50, 100);
    CriarMonstros(&fase[0], 5, 10, 2);
    printf("%d", fase[0].dano);
    printf("\n----------\n");
    printf("%d", novo[0].vida);
    printf("\n----------\n");
    danoGrande(&novo[0],&fase[0]);
    printf("%d", novo[0].vida);
    
    
    return 0;
}
