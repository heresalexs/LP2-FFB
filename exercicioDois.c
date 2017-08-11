#include <stdio.h>
int main() {
    int idade;
    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);
    if(idade < 5) printf("Dente de leite.");
    else if(idade >= 5 && idade <= 11) printf("Jogador infantil.");
    else if(idade >= 12 && idade <= 15) printf("Jogador juvenil.");
    else if(idade >= 16 && idade <=17) printf("Jogador junior.");
    else if(idade >= 18) printf("Jogador adulto");
}
