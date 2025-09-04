#include <stdio.h>
#define linhas 10
#define colunas 10

 int main (){

// Declarando as variaveis!

   char letras[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
   int tabela[linhas][colunas] = {0};
   
// Declarando os valores dentro da matriz na inicialização!

   tabela[2][1] = 3;
   tabela[2][2] = 3; // Navio na Horizontal!
   tabela[2][3] = 3;

   tabela[4][7] = 3;
   tabela[5][7] = 3; // Navio na Vertical!
   tabela[6][7] = 3;

// Logica da tabela usando os Loops "for"!

printf("  TABELA-BATALHA-NAVAL \n\n");
printf("  ");

for ( int l = 0; l < 10; l++){
    printf(" %c", letras[l]);
}
printf("\n");

for ( int a = 0; a < linhas; a++ ){
    printf("%2d", a + 1);
for ( int b = 0; b < colunas; b++ )
{
   if ( tabela[a][b] != 0 ) // Um extra para destacar os numeros dentro da matriz usando a estrutura de decisão "if e else"
{
    printf("\033[1;31m");
} else {
    printf("\033[1;0m");
  }
    printf("%2d", tabela[a][b]); // Mostrando no console a Tabela Batalha Naval
 }
  printf("\n");
}
    
  // FIM.

    return 0;
 }
