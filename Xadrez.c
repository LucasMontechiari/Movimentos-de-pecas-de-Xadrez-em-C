#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void moverTorre(int casas){
     if (casas > 0){
          printf("Direita\n");
          moverTorre(casas - 1); 
     }
}

void moverBispo(int casas) {
    if (casas > 0) {
        // Loop externo: movimento vertical
        for (int i = 0; i < 1; i++) {  
            printf("Cima\n");

            // Loop interno: movimento horizontal
            for (int j = 0; j < 1; j++) {  
                printf("Direita\n");
            }
        } 
    }
}        

void moverRainha(int casas){
     if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1); 
     }
}


int main() {
  
     //Movimentação da torre
     moverTorre(5); // Chama a função recursiva com 5 casas
     printf("A torre moveu 5 casas para a direita.\n\n");
      
     //Movimentação do bispo
    int casas = 5; // número de casas para mover o bispo
    moverBispo(casas);
    printf("O bispo moveu 5 casas na diagonal para cima e direita.\n\n");
    

     //Movimentação da rainha     
    moverRainha(8); // Chama a função recursiva com 8 casas
    printf("A rainha moveu 8 casas para a esquerda.\n\n"); 

     //Movimentação do cavalo
    int cavalo = 1;

    while (cavalo--) { // Controla quantos movimentos o cavalo fará
        printf("Movimento do Cavalo:\n");

        // Loop para o movimento vertical (duas casas para cima)
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");

            if (i == 1) { 
                // Quando já tiver subido duas casas, muda o eixo do movimento
                continue; 
            }
        }

        // Loop para o movimento horizontal (uma casa para a direita)
        for (int j = 0; j < 2; j++) {
            if (j == 1) {
                // Move apenas uma vez para a direita
                printf("Direita\n\n");
                break; // Sai do loop para finalizar o movimento em L
            }
        }
    }


     getchar();
     getchar();
return 0;
}