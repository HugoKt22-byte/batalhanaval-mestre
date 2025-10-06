#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main(){

int tabuleiro[LINHAS][COLUNAS] = {0};

int navio_horizontal[3] = {3, 3, 3};
int navio_vertical[3] = {3, 3, 3};

//NAVIO HORIZONTAL
//posiciona o navio horizontal na linha 2 e coluna 4,5,6
for (int a = 0; a < 3; a++){
    tabuleiro[2][4 + a] = navio_horizontal[a]; //linha 2 e coluna 4
}

//NAVIO VERTICAL
//posiciona o navio vertical na linha 6,7,8 e coluna 7
for (int a = 0; a < 3; a++){
    tabuleiro[6 + a][7] = navio_vertical[a]; //linha 6 e coluna 7 
}                       //NAVIO_VERTICAL DESNECESSÁRIO
                    //POSSO FAZER IGUAL EU FIZ COM O DIAGONAL 3;

//NAVIO DIAGONAL PRINCIPAL

for (int a = 0; a < 3; a++){
tabuleiro[6 + a][5 - a] = 3;
}

//DIAGONAL SECUNDÁRIO

for (int a = 0; a < 3; a++){
tabuleiro[6 - a][1 + a] = 3;
}

printf ("Tabuleiro batalha naval\n");

//imprimi o tabuleiro completo
for (int a = 0; a < LINHAS; a++){
    for (int b = 0; b < COLUNAS; b++){
        printf ("%d ", tabuleiro[a][b]);
    }
    printf ("\n");
}
printf("\n");
//IMPLEMENTANDO TABULEIRO EM FORMA DE CONE
int tabuleirocone[5][5] = {0};

tabuleirocone[2][2] = 5;
tabuleirocone[3][1] = 5;
tabuleirocone[3][2] = 5;
tabuleirocone[3][3] = 5;

for (int j = 0; j < 5; j++) {
    tabuleirocone[4][j] = 5;
}

printf ("\nTabuleiro forma de cone \n");
for (int i = 0; i < 5; i ++){
    for (int j = 0; j < 5; j++){
        printf ("%d ", tabuleirocone[i][j]);
    }
    printf("\n");
}

//IMPLEMENTANDO TABULEIRO EM FORMA DE CRUZ
int tabuleirocruz[5][5] = {0};

for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
        tabuleirocruz [2][i] = 5;
        tabuleirocruz [j][2] = 5;
    }
}

printf ("\nTabuleiro forma de cruz\n");
for (int i = 0; i < 5; i ++){
    for (int j = 0; j < 5; j++){
        printf ("%d ", tabuleirocruz[i][j]);
    }
    printf("\n");
}


//IMPLEMENTANDO TABULEIRO EM FORMA DE OCTAEDRO
int tabuleiroc[5][5] = {0};

for (int j = 0; j < 5; j++){
    tabuleiroc[j][2] = 5;
}

for (int i = 0; i < 3; i++){
    tabuleiroc[2][1 + i] = 5;
}

printf ("\nTabuleiro forma de Octaedro\n");
for (int i = 0; i < 5; i ++){
    for (int j = 0; j < 5; j++){
        printf ("%d ", tabuleiroc[i][j]);
    }
    printf("\n");
}






}