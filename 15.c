#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, media = 0, maior = 0, menor = 10, exame = 0;
    char nome[30];

    printf("Vamos calcular sua m�dia!\n");
    printf("Primeiro, informe seu nome: ");
    scanf("%s", nome);

    for(int i = 0; i < 4; i++){
        printf("Informe a nota do %d� bimestre: ", i+1);
        scanf("%d", &n);
        media += n;

        if(n > maior){
            maior = n;
        }

        if(n < menor){
            menor = n;
        }
    }

    media /= 4;

    if(media >= 7){
        printf("%s, voc� est� APROVADO!\n", nome);
    }else if(media >= 5 && media < 7){
        exame = 10 - media;
        printf("%s, voc� est� de EXAME, a nota necess�ria no exame �: %d\n", nome, exame);
    }else{
        printf("%s, voc� est� REPROVADO!\n", nome);
    }

    printf("A maior nota foi: %d\n", maior);
    printf("A menor nota foi: %d\n", menor);

    return 0;
}
