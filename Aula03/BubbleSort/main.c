#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *V, int N) {
    int i, continua, aux, fim = N;

    do {
        continua = 0;
        for (i = 0; i < fim - 1; i++) {
            if (V[i] > V[i+1]) {
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                continua = 1;
            }
        }
        fim--;
    } while (continua != 0);
}

int main() {
    int V[] = {5, 3, 8, 1, 2};
    int N = 5;

    bubbleSort(V, N);

    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}
