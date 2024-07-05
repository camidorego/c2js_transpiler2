
#include <stdio.h>

void imprime_par() {
    for(int i = 0; i < 10; i++) {
        if(i % 2 == 0) {
            printf("par\n");
        } else {
            printf("impar\n");
        }
    }
}

int main() {
    printf("Hola mundo\n");
    imprime_par();
    return 0;
}
