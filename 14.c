#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n, par=0;

    for(int i=0; i<10; i++){
        printf("Informe o número: ");
        scanf("%d", &n);

        if(n % 2 == 0){
            par += 1;
        }
    }

    printf("Quantidade de números pares: %d\n", par);
    printf("Quantidade de números ímpares: %d\n", 10 - par);

    return 0;
}
