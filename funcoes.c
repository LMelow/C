#include <stdio.h>

int somapositivo(int a, int b){
    if (a>0 && b > 0){
        printf("Soma: %d\n", a+b);  
    } else {
        printf("Não somamos valores negativos!\n");
    }
}


int main(){
    int x, y, soma;
    
    printf("Informe dois inteiros para a soma: ");
    scanf("%d %d",&x, &y);
    soma = somapositivo(x, y);
    
    return 0;
}