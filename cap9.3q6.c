#include <stdio.h>
int soma_vetor(int vetor[], int tamanho) {
    
    if (tamanho <= 0) {
        return 0;
    }
    
    return vetor[tamanho - 1] + soma_vetor(vetor, tamanho - 1);
}


double media_vetor(int vetor[], int tamanho) {
   
    if (tamanho <= 0) {
        return 0.0;
    }
    
    int soma = soma_vetor(vetor, tamanho);
    return (double)soma / tamanho;
}

int main() {
    int tamanho;

    
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &tamanho);

    
    if (tamanho <= 0) {
        printf("O número de elementos deve ser maior que 0.\n");
        return 1;
    }

    int vetor[tamanho];

 
    printf("Digite os %d elementos do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

   
    double media = media_vetor(vetor, tamanho);
    printf("A média dos elementos do vetor é: %.2f\n", media);

    return 0;
}
