#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"Portuguese");
    int n, soma = 0, maior, menor;
    float media;

    printf("Informe 10 n�meros: ");
    scanf("%d", &n);
    soma += n;
    maior = n;
    menor = n;

    for(int i = 1; i < 10; i++){
        printf("Informe mais um n�mero: ");
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

    printf("A soma dos n�meros digitados: %d\n", soma);
    printf("O maior n�mero digitado �: %d\n", maior);
    printf("O menor n�mero digitado: %d\n", menor);
    printf("A m�dia dos n�meros digitados �: %.2f", media);
}
