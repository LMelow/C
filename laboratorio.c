/*
 * Tarefa de laboratorio 07 - Armazenando e imprimindo informacoes sobre nomes
 *
 * GEX605 AB 2020/1
 *
 * Nome:Leonardo Rebonatto  
 * Matricula:1911100054 
 *
 */

#include <stdio.h>
#include <string.h>

int main() {
    /* Dica:
    *
    * Suponha que voce declarou as seguintes variaveis (no codigo final, T deve
    * ser substituido por um valor numerico):
    *
    * int n;
    * char str[T];
    *
    * Para ler uma linha que contem um inteiro seguida de uma linha que contem
    * uma string, voce pode usar os seguintes comandos:
    *
    * scanf("%d\n", &n);
    *
    * fgets(str, sizeof(str), stdin);
    * str[strcspn(str, "\n")] = '\0';
    *
    *alunos[i] = alunos[strcspn(alunos, "\n")] = '\0'; recebe primeiro char
    * /

    /* Complete aqui */

    char alunos[50];
    int N;

    scanf("%d\n", &N);
    for (int i=0; i<N; i++){
      fgets(alunos, sizeof(alunos), stdin);
      alunos[strcspn(alunos, "\n")] = '\0';
    }
    int T;

    for (int j=0; j<N; j++){
      printf("%s\n", alunos);
    }    
    return 0;
}
