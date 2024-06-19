#include <stdio.h>

int main() {
    char resultado[6];
    int vitorias = 0;

    //Lê os resultados dos 6 jogos
    for (int i = 0; i < 6; i++) {
        scanf(" %c", &resultado[i]);
        if (resultado[i] == 'V') {
            vitorias++;
        }
    }

    //Determina o grupo com base no número de vitórias
    if (vitorias == 5 || vitorias == 6) {
        printf("1\n");
    } else if (vitorias == 3 || vitorias == 4) {
        printf("2\n");
    } else if (vitorias == 1 || vitorias == 2) {
        printf("3\n");
    } else {
        printf("-1\n");
    }

    return 0;
}