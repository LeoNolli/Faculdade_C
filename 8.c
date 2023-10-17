#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"Portuguese");

    for(int i=1;i<100;i++){
        if(i%2==0){
            printf("Esses são os pares de 1 a 100: %d\n", i);
        }
    }
}
