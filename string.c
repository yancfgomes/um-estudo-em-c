#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = "Ola, mundo!";
    size_t tamanho = strlen(texto);

    printf("O comprimento da string e: %zu\n", tamanho);

    return 0;
}

