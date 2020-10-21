#include <stdio.h>
#include <math.h>

int calculadelta(int a, int b, int c){
    b*=b;
    int delta;
    delta = b - 4*a*c;

    return delta;
}

int main(){
    int a,b,c;
    int x1, x2;

    scanf("%d %d %d", &a, &b, &c);

    if (a != 0){
        int delta = calculadelta(a,b,c);
        if (delta >=0){
            x1 = (-b + sqrt(delta))/2*a;
            x2 = (-b - sqrt(delta))/2*a;
            printf("X1: %d, X2: %d\n", x1, x2);    
        } else
        {
            printf("Deu ruim!\n");
        }
        
    }
    
    return 0;
}