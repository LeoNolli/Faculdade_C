#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"Portuguese");
    int n, soma = 0, maior, menor;
    float media;

    printf("Informe 10 números: ");
    scanf("%d", &n);
    soma += n;
    maior = n;
    menor = n;

    for(int i = 1; i < 10; i++){
        printf("Informe mais um número: ");
        scanf("%d", &n);
        soma += n;

        if(n > maior){
            maior = n;
        }

        if(n < menor){
            menor = n;
        }
    }

    media = (float)soma / 10;

    printf("A soma dos números digitados: %d\n", soma);
    printf("O maior número digitado é: %d\n", maior);
    printf("O menor número digitado: %d\n", menor);
    printf("A média dos números digitados é: %.2f", media);
}
