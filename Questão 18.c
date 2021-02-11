#include<stdio.h>
#include<stdlib.h>

int **aloca_matriz_a(int**, int, int);
void libera_matriz_a(int**, int);
int **aloca_matriz_b(int**, int, int);
void libera_matriz_b(int**, int);
int **aloca_matriz_c(int**, int, int);
void libera_matriz_c(int**, int);

void multiplica_matriz(int **c, int **a, int **b, int nca, int nla, int ncb, int nlb){
        int aux = 0;
  for(int k = 0; k < nla; k++) {
		for(int p = 0; p < ncb; p++) {
		    aux = 0;
            for(int i = 0; i < nca; i++){
            aux = aux + *(*(a+k)+i) * (*(*(b+i)+p));
            }
		*(*(c+k)+p) = aux;
		}
	}
}

int main(){
int **a, nla, nca, **b, nlb, ncb, **c;
printf("INFORME O NUMERO DE LINHAS DE A: ");
scanf("%d", &nla);
printf("INFORME O NUMERO DE COLUNAS DE A: ");
scanf("%d", &nca);

printf("\n");
a = aloca_matriz_a(a, nla, nca);

for(int i = 0; i < nla; i++){
    for(int j = 0; j < nca; j++){
        printf("INFORME O VALOR DA %d%c LINHA E DA %d%c COLUNA DA MATRIZ A: ", i+1, 167, j+1, 167);
        scanf("%d", &a[i][j]);
    }
}
printf("\n");
printf("A MATRIZ A E DADA POR: \n");
for(int i = 0; i < nla; i++){
    for(int j = 0; j < nca; j++){
            printf("%d ", a[i][j]);
    }
printf("\n");
}

printf("\n");
printf("INFORME O NUMERO DE LINHAS DE B: ");
scanf("%d", &nlb);
printf("INFORME O NUMERO DE COLUNAS DE B: ");
scanf("%d", &ncb);
printf("\n");
if(nca != nlb){
    printf("IMPOSSIVEL REALIZAR ESTA OPERACAO");
    printf("\n");
}else{
printf("\n");
b = aloca_matriz_b(b, nlb, ncb);

printf("\n");
for(int i = 0; i < nlb; i++){
    for(int j = 0; j < ncb; j++){
        printf("INFORME O VALOR DA %d%c LINHA E DA %d%c COLUNA DA MATRIZ B: ", i+1, 167, j+1, 167);
        scanf("%d", &b[i][j]);
    }
}
printf("\n");
printf("A MATRIZ B E DADA POR: \n");
for(int i = 0; i < nlb; i++){
    for(int j = 0; j < ncb; j++){
            printf("%d ", b[i][j]);
    }
    printf("\n");
}
printf("\n");

c = aloca_matriz_c(c, nla, ncb);
multiplica_matriz(c, a, b, nla, nca, nlb, ncb);
printf("A MATRIZ C E DADA POR: \n");
    for(int i = 0; i < nla; i++) {
		for(int j = 0; j < ncb; j++) {
			printf("%d ", *(*(c+i)+j));
		}
		printf("\n");
}

libera_matriz_a(a, nla);
libera_matriz_b(b, nlb);
libera_matriz_c(c, nla);

    return 0;
}
}



int **aloca_matriz_a(int **a,int nla, int nca) {
     a = malloc(nla * sizeof(int *));

    for (int i = 0; i < nla; i++) {
        a[i] = malloc(nca * sizeof(int));
    }

    return a;
}

void libera_matriz_a(int **a, int nla) {

    for (int i = 0; i < nla; i++) {
        free(a[i]); // libera primeiro a segunda dimensão
    }
    free(a); // libera a primeira dimensão
}

int **aloca_matriz_b(int **b,int nlb, int ncb) {
     b = malloc(nlb * sizeof(int *));

    for (int i = 0; i < nlb; i++) {
        b[i] = malloc(ncb * sizeof(int));
    }

    return b;
}
void libera_matriz_b(int **b, int nlb) {

    for (int i = 0; i < nlb; i++) {
        free(b[i]); // libera primeiro a segunda dimensão
    }
    free(b); // libera a primeira dimensão
}

int **aloca_matriz_c(int **c,int nla, int ncb) {
     c = malloc(nla * sizeof(int *));

    for (int i = 0; i < nla; i++) {
        c[i] = malloc(ncb * sizeof(int));
    }

    return c;
}
void libera_matriz_c(int **c, int nla) {

    for (int i = 0; i < nla; i++) {
        free(c[i]); // libera primeiro a segunda dimensão
    }
    free(c); // libera a primeira dimensão
}


