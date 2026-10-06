#include <stdio.h>



int verification  (int a) {
    if (a < 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void somatorio (int a) {
    int i = 1;
    int p = 5;
    if (a < 0 ) {
        return;
    }
    else {
        printf("%d", a);
        for (i = 1; i < p; i++) {
            a = a + a;
            printf(" + %d", a); 
            i = i + 1;
        }
    }

}

int main () {
    int b; 
    printf("Digite um número inteiro: ");
    scanf("%d", &b);
    if (verification(b) == 1) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é positivo ou zero.\n");
        somatorio(b);
    }

    return 0;
}