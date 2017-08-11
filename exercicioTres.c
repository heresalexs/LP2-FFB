#include <stdio.h>
int main() {
    int valores[20], maior = 0, menor = 2;
    for(int i = 0; i <= 19; i++) {
        printf("Digite o %do valor: ", i+1);
        scanf("%d", &valores[i]);
        if(valores[i] > maior) {
            maior = valores[i];
        }
    }
    menor = maior;          //Após muito bater cabeça, percebi que a única forma segura de retornar o menor, é inicializar o
    for(int i = 0; i <= 19; i++) {      //menor como o maior.
        if(valores[i] < menor) menor = valores[i];
    }
    printf("Maior: %d\tMenor: %d", maior, menor);
}
