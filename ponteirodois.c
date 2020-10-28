//2 - Escreva uma função que receba um vetor V com 10 inteiros armazenados. A função deve retornar o 
//vetor V com o valor de cada posição multiplicado por 2. Os valores devem ser acessíveis fora do método.
#include <stdio.h>

void sub(int v[]){
    int *pont;
    for (int i = 0; i < 10;i++){
        pont = &v[i];
    }
    printf("%d", *pont);
}

int main(){

    int v[10];
    
    for (int i = 0; i < 10;i++){
        scanf("%d", &v[i]);
        sub(v[i]);
    }

    return 0;
}