#include <stdio.h>
int main() {
    int num, invert = 0;
    printf("Digite um numero para inverter: ");
    scanf("%d", &num);
    while(num != 0) {
        invert = invert * 10;   //Joga uma casa decimal para o lado. Indiferente se é 0, ocupando a primeira casa
        invert = invert + num % 10; // adiciona resto da casa decimal
        num = num / 10;             //Contabiliza do valor informado a casa adicionada e invertida, usando-a como parâmetro
    }
    if(invert <= 10) printf("00%d", invert);
    else if(invert >= 100 && invert < 1000) printf("00%d", invert);             //CÓDIGO INCOMPLETO
    else printf("%d", invert);
}
