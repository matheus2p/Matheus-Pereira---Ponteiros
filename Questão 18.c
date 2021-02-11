#include <stdio.h>
#include <stdlib.h>

void multiplica_matriz(int **c, int **a, int **b, int nca, int nla, int ncb){
    printf("CHEGUEI");
        int aux = 0;
  for(int k = 0; k < nla; k++) {
		for(int p = 0; p < ncb; p++) {
		    aux = 0;
            for(int i = 0; i < nca; i++){
            aux += *(*(a+k)+i) * (*(*(b+i)+p));
            }
		*(*(c+k)+p) = aux;
		}
	}
}

int main(){
int nca,nla,ncb, nlb;
printf("INFORME O NUMERO DE COLUNAS DE A: ");
scanf("%d", &nca);
printf("INFORME O NUMERO DE LINHAS DE A: ");
scanf("%d", &nla);
printf("INFORME O NUMERO DE LINHAS DE B: ");
scanf("%d", &nlb);
printf("INFORME O NUMERO DE COLUNAS DE B: ");
scanf("%d", &ncb);
if(nca != nlb){
    printf("E IMPOSSIVEL REALIZAR A OPERACAO");
    printf("\n");
}else{
printf("\n");

int **a, **b, **c;

a = malloc(nla*(sizeof(int*)));
a[0] = malloc(ncb*nla*(sizeof(int)));
for(int l = 0; l < nla; l++){
    a[l] = a[l-1] + nca;
}
b = malloc(nca*(sizeof(int*)));
b[0] = malloc(nca*ncb*(sizeof(int)));
for(int l = 0; l < nca; l++){
    b[l] = b[l-1] + ncb;
}
c = malloc(nla*(sizeof(int*)));
c[0] = malloc(nla*ncb*(sizeof(int)));
for(int l = 0; l < nla; l++){
    c[l] = c[l-1] + ncb;
}


for(int i = 0; i < nla; i++){
    for(int j = 0; j < nca; j++){
        printf("INFORME O VALOR DA %d%c LINHA E DA %d%c COLUNA DA MATRIZ A: ", i+1, 167, j+1, 167);
        scanf("%d", &*(*(a+i)+j));
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

multiplica_matriz(c, a, b, nla, nca, ncb);

printf("A MATRIZ C E DADA POR: \n");
    for(int i = 0; i < nla; i++) {
		for(int j = 0; j < ncb; j++) {
			printf("%d", *(*(c+i)+j));
		}
		printf("\n");
}

free(a[0]);
free(a);
free(b[0]);
free(b);
free(c[0]);
free(c);

}
return 0;

}
