#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char vet[20];
    
    fgets(vet, sizeof(vet), stdin);
    vet[strcspn(vet, "\n")] = '\0';

    for(i = 0; i < sizeof(vet);i++){
        if (vet[i]=='\0'){
            break;
        }
    }
    printf("%d", i);
    return 0;
}