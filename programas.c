#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int num_chars;
    char vet[20];

    fgets(vet, sizeof(vet), stdin);
    vet[strcspn(vet['\n'])] = '\0';
    
    num_chars = 0;
    for (i = 0; i < 20; i++){
       if(vet[i] == '\0'){
           break;
       }

       num_chars++; 
    }

    return 0;
}