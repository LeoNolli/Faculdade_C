#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    for(int i=0;i<=100;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}
