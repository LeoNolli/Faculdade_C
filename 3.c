#include <stdio.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL,"Portuguese");
    int soma=0;

    for(int n=1;n<=100;n++){
        if(n%2==0){
            soma+=n;
        }
    }
    printf("A soma dos números pares é: %d", soma);
}
