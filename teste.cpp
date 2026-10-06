#include <stdio.h>

int verification  (int a) {
    if (a < 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main () {
    int b; 
    printf("Digite um número inteiro: ");
    scanf("%d", &b);
    if (verification(b) != 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é positivo ou zero.\n");
    }

    return 0;
}