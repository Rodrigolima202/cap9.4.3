#include <stdio.h>
void imprimir_numeros_decrescente(int N) {
    
    if (N < 0) {
        return;
    }
   
    printf("%d ", N);
   
    imprimir_numeros_decrescente(N - 1);
}

int main() {
    int N;

    
    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    
    if (N < 0) {
        printf("Por favor, insira um número não-negativo para N.\n");
        return 1;
    }

    
    imprimir_numeros_decrescente(N);
    printf("\n"); 

    return 0;
}
