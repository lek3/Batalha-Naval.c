// Desafio Batalha Naval NIvel Aventureiro em .C

// Bibliotecas que serão utilizadas!

#include <stdio.h>
#define linhas 10
#define colunas 10

 int main (){

// Declarando as variaveis!

   char letras[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
   int tabela[linhas][colunas] = {0};
   
// Declarando os valores dentro da matriz na inicialização!

// Navio na Horizontal!

  tabela[2][1] = 3;
    tabela[2][2] = 3; 
      tabela[2][3] = 3;

// Navio na Vertical!

  tabela[7][7] = 3;
    tabela[5][7] = 3; 
      tabela[6][7] = 3;

// Navio na Diagonal!

  tabela[0][8-0] = 3;
    tabela[1][7] = 3; 
      tabela[2][6] = 3;

  tabela[5][1] = 3;
    tabela[6][2] = 3; 
      tabela[7][3] = 3;

// Logica da tabela usando os Loops "for"!

printf("  \033[1;34mTABELA.BATALHA.NAVAL\033[1;0m  \n\n");
  printf("  ");

for ( int l = 0; l < 10; l++)
  {
    printf(" \033[1;34m%c\033[1;0m", letras[l]);  // letras para identificar as colunas!
  }
printf("\n");

for ( int a = 0; a < linhas; a++ ){
  printf("\033[1;34m%2d\033[1;0m", a + 1);  // Destaquei os valores que identifica as linhas e colunas!
    for ( int b = 0; b < colunas; b++ )
 {
   if ( tabela[a][b] != 0 )  // Um extra para destacar os numeros dentro da matriz usando a estrutura de decisão "if e else"
 {
       printf("\033[1;31m");
   } else {
       printf("\033[1;0m");
      }
      printf("%2d", tabela[a][b]);  // Mostrando no console a Tabela Batalha Naval
   }
   printf("\n");
}
    
  // FIM.

    return 0;
}
