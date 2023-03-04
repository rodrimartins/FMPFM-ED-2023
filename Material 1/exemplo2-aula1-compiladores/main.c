#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, sum = 0;
    for (i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("A soma dos numeros de 1 a 10 eh %d\n", sum);
    return 0;
}

