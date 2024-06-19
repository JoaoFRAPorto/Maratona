#include <stdio.h>

int main() {
    char L, C;
    scanf("%d %d", &L, &C);

    int A, B;
    scanf("%d %d", &A, &B);

    int salão[L][C];
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &salão[i][j]);
        }
    }

    A--; B--;

    int direcoes[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // Norte, Sul, Oeste, Leste
    int x = A, y = B;

    while (1) {
        int found = 0;
        for (int i = 0; i < 4; i++) {
            int nx = x + direcoes[i][0];
            int ny = y + direcoes[i][1];
            if (nx >= 0 && nx < L && ny >= 0 && ny < C && salão[nx][ny] == 1) {
                // Move para o próximo
                salão[x][y] = 0;
                x = nx;
                y = ny;
                found = 1;
                break;
            }
        }
        if (!found) break;
    }

    printf("%d %d\n", x + 1, y + 1);

    return 0;
}