#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  
     //Movimentação da torre
     for (int i = 0; i < 5; i++){
          printf("Movimento %d Torre:\n", i + 1); // Mostra a contagem da iteração
          printf("Direita\n\n");
     }
      
     //Movimentação do bispo
      int bispo = 0;
          while (bispo < 5) {  // Executa 5 vezes
        printf("Movimento %d Bispo:\n", bispo + 1); // Mostra a contagem da iteração
        printf("Cima\n");
        printf("Direita\n\n");
        bispo++;
     }

     //Movimentação da rainha     
     int r = 0;
     do {
          printf("Movimento %d Rainha:\n", r + 1); // Mostra a contagem da iteração
          printf("Esquerda\n\n");
          r++;
     } while (r < 8); // Executa 8 vezes

     //Movimentação do cavalo
     int cavalo = 1; 

     while (cavalo -- ){
          for(int i = 0; i < 2; i++){  
          }
          printf("Movimento Cavalo:\n"); // Mostra a contagem da iteração
          printf("Baixo \n");
          printf("Baixo \n");
          printf("Esquerda\n\n");
     
     }


     getchar();
     getchar();
return 0;
}