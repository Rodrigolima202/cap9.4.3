#include <stdio.h>


int soma_numeros(int N) {
    
    if (N == 1) {
        return 1;
    } else {
        
        return N + soma_numeros(N - 1);
    }
}

int main() {
    int N;

    
    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    
    if (N < 1) {
        printf("Por favor, insira um valor positivo para N.\n");
        return 1;
    }

   
    printf("A soma dos números de 1 a %d é: %d\n", N, soma_numeros(N));

    return 0;
}
