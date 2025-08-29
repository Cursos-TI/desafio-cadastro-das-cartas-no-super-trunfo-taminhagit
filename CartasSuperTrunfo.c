#include <stdio.h>

int main() {
    printf("Desafio super trunfo cartas!\n");

    int Carta = 1;
    char estado = 'A';
    char codigo [] = "A01";
    char cidade[] = "Ariquemes";
    double populacao = 96.833;
    float area = 4.427;
    float PIB = 3.21;
    int pontosturísticos = 11;

    printf("Carta número: %d\n", Carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %.3f habitantes\n", populacao);
    printf("Área total: %.3f Km²\n", area);
    printf("PIB: %.2f Bilhões\n", PIB);
    printf("Pontos turísticos: %d\n", pontosturísticos);

    return 0;

}