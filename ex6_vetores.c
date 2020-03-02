#include <stdio.h>

int main(){
    int A[10], B[10], k=0, flag=0;

    // preenchimento do primeiro vetor
    for(int i=0; i<10; ++i){
        printf("Digite o %do. valor: ", i+1);
        scanf("%d", &A[i]);
    }

    // varre o vetor A, item por item
    for(int i=0; i<10; ++i){
        for(int j=0; j<10; ++j){
            if(A[i] == B[j])    // se houver o valor no vetor B, seta a flag
                flag = 1;
        }
        if(flag == 0){      // se a flag não estiver setada, copia o valor de A em B, 
            B[k] = A[i];    
            ++k;            // incrementa a posição de B
        }
        flag = 0;           // reseta a flag
    }

    printf("Vetor [");
    for(int i=0; i<k; i++){
        printf("%d ", B[i]);
    }
    printf("]\n");
    return 0;
}