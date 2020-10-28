#include <stdio.h>

void somaAB(int a, int b){
    int *x;
    x = &a;
    *x = a+b;
    printf("a novo = %d\n", *x );

}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    
    somaAB(a,b);
    
    printf("a antigo = %d", a);
    
    return 0;
}