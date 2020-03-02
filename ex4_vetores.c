#include<stdio.h>

int main(){
	// Declaração de Variáveis
	int v[40];
	int primeiro=0, pos_primeiro=0, menor=0, pos_menor=0, aux=0, i, j;
	
	// Preenchimento do vetor com valores digitados
	for(i=0; i<40; ++i){
		printf("Digite o %do. valor: ", i+1);
		scanf("%d", &v[i]);
	}
	
	// varre o vetor item por item
	for(i=0; i<40; ++i){
		primeiro = v[i];
		pos_primeiro = i;
		
		// varre o restante do vetor em busca do menor valor
		menor = primeiro;
		pos_menor = pos_primeiro;
		for(j=i+1; j<40; ++j){
			if(v[j] < primeiro && v[j] < menor){	// se houver um valor menor que a primeira posição no restante do vetor:
				menor = v[j];						// captura o valor e a posição
				pos_menor = j;
			}
		}
		
		// se o menor valor for menor que o primeiro e estiver mais pra frente no vetor, troca as posições
		if(menor < primeiro && pos_primeiro < pos_menor){
			aux = v[pos_primeiro];
			v[pos_primeiro] = v[pos_menor];
			v[pos_menor] = aux;
		}
	}
	
	// Imprime o valor em ordem crescente
	printf("\nVetor : [");
	for(i=0; i<40; ++i){
		printf("%d ", v[i]);
	}
	printf("]\n");
	
	return 0;
}