#include <stdio.h>

/
int soma_cubos(int n) {
   
    if (n == 1) {
        return 1;
    } else {
        
        return n * n * n + soma_cubos(n - 1);
    }
}

int main() {
    int n;
 
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    
    if (n < 1) {
        printf("Por favor, insira um valor positivo para n.\n");
        return 1;
    }

    printf("A soma dos primeiros %d cubos é: %d\n", n, soma_cubos(n));

    return 0;
}