//3 - Escreva um método que receba como parâmetros um vetor de inteiros, 
//e retorne o maior elemento e o menor elemento. Observe que uma função em C não pode
#include <stdio.h>
void sub(int a, int b){
    int *pont;
    pont = &a;
    a = a - b;
    printf("%d", *pont);
}

int main(){

    int a, b;
    
    scanf("%d %d", &a, &b);
    sub(a,b);
    
    return 0;
}