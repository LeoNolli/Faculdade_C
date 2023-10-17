#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int n;

    for(n=10;n>=1;n--){
        printf("%d\n", n);
    }




}
