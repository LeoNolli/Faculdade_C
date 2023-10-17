#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int n, fatorial=1;
    printf("Informe o número para o fatorial: ");
    scanf("%d",&n);

    if( n<0){
        printf("Não existe fatorial negativo!");
    }else{
        for(int i=1;i<=n;i++){
            fatorial *=i;
        }
    }
    printf("%d! = %d\n", n,fatorial);
}
