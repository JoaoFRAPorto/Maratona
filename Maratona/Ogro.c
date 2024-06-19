#include <stdio.h>

void representar_dedos(int n) {
    char mao_esquerda[6];
    char mao_direita[6];

    if (n <= 5) {
        // Configuração para números de 0 a 5
        for (int i = 0; i < n; i++) {
            mao_esquerda[i] = 'I';
        }
        for (int i = n; i < 5; i++) {
            mao_esquerda[i] = '*';
        }
        mao_esquerda[5] = '\0'; // Finaliza a string

        for (int i = 0; i < 5; i++) {
            mao_direita[i] = '*';
        }
        mao_direita[5] = '\0'; // Finaliza a string
    } else {
        // Configuração para números de 6 a 10
        for (int i = 0; i < 5; i++) {
            mao_esquerda[i] = 'I';
        }
        mao_esquerda[5] = '\0'; // Finaliza a string

        for (int i = 0; i < (n - 5); i++) {
            mao_direita[i] = 'I';
        }
        for (int i = (n - 5); i < 5; i++) {
            mao_direita[i] = '*';
        }
        mao_direita[5] = '\0'; // Finaliza a string
    }

    printf("%s\n", mao_esquerda);
    printf("%s\n", mao_direita);
}

int main() {
    int n;
    scanf("%d", &n);
    representar_dedos(n);
    return 0;
}