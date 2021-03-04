#include <stdio.h>
#include <stdlib.h>

int buscaSequencial(int v[], int n, int chave){
    int i;
    for(i=0; i<n; i++){
        if(v[i]==chave){
            return i;
        }
    }
    return -1;
}

int main()
{
    int v[] = {3,8,15,42,54,67,84,85,89,92};
    int a = buscaSequencial(v, 10, 84);
    printf("Posicao que o valor foi encontrado: %d \n", a);
    return 0;
}
