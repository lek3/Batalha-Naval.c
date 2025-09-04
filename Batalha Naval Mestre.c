// Desafio Batalha Naval NIvel Mestre em .C

// Bibliotecas que serão utilizadas!

#include <stdio.h>

// Definindo as linhas e colunas da tabela 10x10!

#define linhas 10
#define colunas 10

// Definindo as linhas e colunas das tabelas de Habilidades!

#define linha 5
#define coluna 5

  int main (){

// Declarando as variaveis!

  char letras[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabela[linhas][colunas] = {0};
      int cone[linha][coluna] = {0};
         int cruz[linha][coluna] = {0};
           int octaedro[linha][coluna] = {0};


// Declarando os valores dentro da matriz na inicialização!

// Declarando os valores das habilidades do "Cone"!

cone[2][0] = 5;
  cone[2][1] = 5;
    cone[2][2] = 5;
      cone[2][3] = 5;
        cone[2][4] = 5;
                     
cone[1][1] = 5;
  cone[1][2] = 5;
    cone[1][3] = 5;
      cone[0][2] = 5;

 // Declarando os valores das habilidades da "Cruz"!

cruz[0][2] = 5;
  cruz[1][2] = 5;
    cruz[2][2] = 5;
      cruz[3][2] = 5;
        cruz[4][2] = 5;
                      
cruz[2][0] = 5;
  cruz[2][1] = 5;
    cruz[2][2] = 5;
      cruz[2][3] = 5;
        cruz[2][4] = 5;

// Declarando os valores das habilidades do "Octaedro"!

octaedro[0][2] = 5;
  octaedro[1][1] = 5;
    octaedro[1][2] = 5;
      octaedro[1][3] = 5;

octaedro[2][0] = 5;
  octaedro[2][1] = 5;
    octaedro[2][2] = 5;  
      octaedro[2][3] = 5;
        octaedro[2][4] = 5;  

octaedro[3][1] = 5;
  octaedro[3][2] = 5;
    octaedro[3][3] = 5;
      octaedro[4][2] = 5;

// Logica das tabelas de Habilidades 5x5 usando os Loops "for"!

int linha_inicial_cone = 0;
  int coluna_inicial_cone = 0;

for ( int i = 0; i < linha; i++){
  for ( int k = 0; k < coluna; k++){
    tabela[linha_inicial_cone + i][coluna_inicial_cone + k] = cone[i][k];
  }
}

int linha_inicial_cruz = 4;
  int coluna_inicial_cruz = 0;

for ( int i = 0; i < linha; i++){
  for ( int k = 0; k < coluna; k++){
    tabela[linha_inicial_cruz + i][coluna_inicial_cruz + k] = cruz[i][k];
  }
}

int linha_inicial_octaedro = 2;
  int coluna_inicial_octaedro = 5;

for ( int i = 0; i < linha; i++){
  for ( int k = 0; k < coluna; k++){
    tabela[linha_inicial_octaedro + i][coluna_inicial_octaedro + k] = octaedro[i][k];
  }
}

// Logica da tabela 10x10 usando os Loops "for"!

printf("  \033[1;34mTABELA.BATALHA.NAVAL\033[1;0m  \n\n");
  printf("  ");

for ( int l = 0; l < 10; l++){
  printf(" \033[1;34m%c\033[1;0m", letras[l]); // letras para identificar as colunas!
}
  printf("\n");

for ( int a = 0; a < linhas; a++ ){
  printf("\033[1;34m%2d\033[1;0m", a + 0); // Destaquei os valores que identifica as linhas e colunas!
    for ( int b = 0; b < colunas; b++ )
 {
  if ( tabela[a][b] != 0 ) // Um extra para destacar os numeros dentro da matriz usando a estrutura de decisão "if e else"
  {
    printf("\033[1;31m");
  } else {
      printf("\033[1;0m");
    }
    printf("%2d", tabela[a][b]);  // Mostrando no console a Tabela Batalha Naval
    } 
  printf("\n");
 }
printf("\n\n");

// FIM.

  return 0;
}
