#include <stdio.h>

int main(int argc, char *argv[]){
    int v[10];
    int maior;
    
    for(int i=0; i<10; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &v[i]);
    }

    maior = v[0];
    for(int i = 1; i < 10; ++i){
        if(v[i] > maior)
            maior = v[i];
    }

    printf("O maior valor digitado foi: %d\n", maior);
    return 0;
}