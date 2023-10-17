#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int n,result;

    printf("Vamos calcular!\n");
    printf("Informe o número que você deseja saber a tabuada: ");
    scanf("%d", &n);

    if(n>=1 && n<=10){
        for(int i=1;i<=10;i++){
            result=n*i;
            printf("\t %d * %d= %d\n" ,n,i,result);
        }
    }
}
