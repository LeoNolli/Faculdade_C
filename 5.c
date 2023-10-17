#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int n,soma=0;

    for(int i=0;i<5;i++){
        printf("Informe 5 números que seram somados: ");
        scanf("%d", &n);
        soma+=n;
    }
    printf("A soma é: %d", soma);
}
