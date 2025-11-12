#include <stdio.h>

int main() {

    /*Início do código com a movimentação da peça TORRE, antes de cada for
    coloquei um printf para separar cada bloco de movimentação do outro*/

    printf("\nMovimento da peça Torre:\n");
for (int i = 0; i < 5; i++ ) {
    printf("Direita\n");
}

    printf("\nMovimento da peça Bispo:\n");
for (int i = 0; i < 5; i++ ) {
    printf("Cima, Direita\n");
}

    printf("\nMovimento da peça Rainha:\n");
for (int i = 0; i < 8; i++ ) {
    printf("Esquerda\n");
}

int movimentoCavalo = 1;

    printf("\nMovimento da peça Cavalo:\n");
while (movimentoCavalo--)
{ for (int i = 0; i < 2; i++){
    printf("Cima\n");

}
printf("Direita\n");
}




return 0;
}
