#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    for(int i=0;i<=50;i++){
        printf("%d\n",i);
    }
}
