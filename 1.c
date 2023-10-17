#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int n;


    for(n=1;n<=10;n++){
        printf("%d\n",n);
    }

}
