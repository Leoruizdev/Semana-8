#include <stdio.h>


int divisiveis(int arr[], int tam, int x) {
    
    if (tam == 0)
        return 0;

    
    int soma = divisiveis(arr, tam - 1, x);
    if (arr[tam - 1] % x == 0)
        soma += arr[tam - 1]; 

    return soma;
}

int main() {
    int vet[] = {10, 20, 30, 40};
    int vet = sizeof(vet) / sizeof(vet[0]);
    int div = 5;

    
    int soma_divisiveis = divisiveis(vet, vet, div);
    printf("Soma dos numeros no vetor divisiveis por %d: %d\n", div, soma_divisiveis);

    return 0;
}
