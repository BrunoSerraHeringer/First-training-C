#include <stdio.h>

void p(int i, int n) {
    (i < n) && (printf("%d ", i), p(i + 2, n), 1);
}

int main(void) {
    printf("Escolha um numero para receber a sequencia de numeros pares menores que seu numero\n");
    int n;
    if (scanf("%d", &n) != 1) return 1;
    printf("sua sequencia e\n");
    if (n > 2) p(2, n);
    return 0;
}