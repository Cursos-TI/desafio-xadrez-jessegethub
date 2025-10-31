#include <stdio.h>

int main() {

    /*Início do código com a movimentação da peça TORRE, antes de cada for
    coloquei um printf para separar cada bloco de movimentação do outro*/

    printf("\nMovimento da peça Torre\n");
for (int i = 0; i < 5; i++ ) {
    printf("Movimento peça Torre: Direita\n");
}

    printf("\nMovimento da peça Bispo\n");
for (int i = 0; i < 5; i++ ) {
    printf("Movimento peça Bispo na diagonal: Cima, Direita\n");
}

    printf("\nMovimento da peça Rainha\n");
for (int i = 0; i < 8; i++ ) {
    printf("Movimento peça Rainha: Esquerda\n");
}



return 0;
}