//1 - Escreva uma função que recebe dois parâmetros a e b, 
//e guarda no primeiro parâmetro (a) o valor da subtração dos dois valores (a = a-b).
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