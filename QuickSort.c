#include <stdio.h>
#include <stdlib.h>


void quickSort(int v[], int tamanho) {
    int pivo = v[tamanho - 1];
    //maior
    int maior = 0;

    for (int i = 0; i < pivo; i++) {
        if (v[i] > pivo) {
            maior = v[i];
        }
        if(v[i] < pivo) {
            v[i] = maior;
            maior = v[i+1];
        }   
    }
}

int main() {
  int v[] = {52,54,80,62,74,99,61,50,44,89,58};
  //int v[] = {12,15,32,47,70,92,11,41,6};
 
  quickSort(v,11);

}

-------------------------------------------------------------------------------

#include <stdio.h>
2	#include <stdlib.h>
3	
4	struct node {
5	    int numero;
6	    struct node* prox;
7	};
8	
9	struct node* cria_lista(int numero) {
10	  struct node* n = malloc(sizeof(struct node));
11	  n -> numero = numero;
12	  n -> prox = NULL;
13	  return n;
14	};
15	
16	void adicionar(struct node* n, int numero) {
17	  struct node* temp = cria_lista(numero);
18	  
19	  temp -> prox = n -> prox;
20	  n -> prox = temp;
21	}
22	
23	void remover(struct node* n) {
    struct node* lixo = n -> prox;
24	  n -> prox = n -> prox -> prox;
25	  free(lixo);
26	  }
27	
28	void imprimir(struct node* n) {
29	  for(n = n-> prox ;n !=NULL ;n = n-> prox){
30	    printf("%d \n", *n);
31	  }
32	}
33	
34	int main() {
35	  struct node* n =  malloc(sizeof(struct node));
36	  n -> prox = NULL;
37	 
38	  adicionar(n, 5);
39	  adicionar(n, 7);
40	  adicionar(n, 15);
41	  remover(n);
42	  imprimir(n);
43	}