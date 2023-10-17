#include <stdio.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"Portuguese");

    for(int i=0;i<500;i++){
        if(i%3==0){
            printf("%d\n", i);
        }
    }
}
