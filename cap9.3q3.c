#include <stdio.h>
void imprimir_numeros(int N) {
   
    if (N < 0) {
        return;
    }
    
    imprimir_numeros(N - 1);
   
    printf("%d ", N);
}

int main() {
    int N;

    
    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    
    if (N < 0) {
        printf("Por favor, insira um número não-negativo para N.\n");
        return 1;
    }

   
    imprimir_numeros(N);
    printf("\n"); 

    return 0;
}
