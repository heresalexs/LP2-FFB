#include <stdio.h>
#include <stdlib.h>
int main() {
    int numero[2]; //Os três números inteiros
    int menor = 0;
    int medio = 0;      //Inicializa as variáveis para utilizar como parâmetro condicional e evitar bugs
    int maior = 0;
    for(int i=0;i<=2;i++) {
        do {                            //O do while garante que o usuário digite os três números diferentes
            printf("Digite o %do numero: ", i + 1);
            scanf("%d", &numero[i]);
            if(numero[i] > maior) maior = numero[i];    //Para dispor os números de forma decrescente, começamos aqui encontrando o maior de todos
        } while(numero[i] == numero[i-1]);
    }
    for(int i=0;i<=2;i++) {
        if(numero[i] < maior && medio == 0) {
            medio = numero[i];
            i = 0;                                  //Um for contendo estruturas condicionais guia o programa para encontrar o número médio e o menor
        } else if(medio != 0 && menor == 0) {
                if(numero[i] < medio) {
                    menor = numero[i];
                } else {
                    menor = medio;
                    medio =  numero[i];
                }
        }
    }
    printf("\n%d - %d - %d", maior,medio,menor);
    return 0;
}
