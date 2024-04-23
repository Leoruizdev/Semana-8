#include <stdio.h>


int divisiveis(int arr[], int tam, int x) {
  
    if (tam == 0)
        return 0;

    
    int cont = divisiveis(arr, tam - 1, x);
    if (arr[tam - 1] % x == 0)
        return cont + 1; 
    else
        return cont; 
}

int main() {
    int vet[] = {10, 20, 30, 40};
    int tam = sizeof(vet) / sizeof(vet[0]);
    int div = 5;

    
    int qtd = divisiveis(vet, tam, div);
    printf("Quantidade de numeros no vetor divisiveis por %d: %d\n", div, qtd);

    return 0;
}

