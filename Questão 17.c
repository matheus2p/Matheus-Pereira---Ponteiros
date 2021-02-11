#include<stdio.h>
#include<stdlib.h>

void soma(int *a, int *b, int *c, int n){
   for(int i = 0; i < n; i++){
    c[i] = a[i] + b[i];
   }
}

int main(){
int n;
printf("INFORME O TAMANHO DO VETOR: ");
scanf("%d", &n);

int a[n];
printf("INFORME OS VALORES DO PRIMEIRO VETOR: ");
   for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
   }

int b[n];
printf("INFORME OS VALORES DO SEGUNDO VETOR: ");
   for(int i = 0; i < n; i++){
    scanf("%d", &b[i]);
   }
int c[n];

c[n] = malloc(n*sizeof(float));
b[n] = malloc(n*sizeof(float));
a[n] = malloc(n*sizeof(float));

soma(a, b, c, n);

printf("\n");
printf("O VETOR RESULTANTE C TEM COMO VALORES A SOMA DOS ELEMENTOS CORRESPONDENTES EM A E B\n");
printf("\n");
printf("SENDO ASSIM, OS VALORES DO VETOR C SAO: \n");
for(int i = 0; i < n; i++){
    printf("%d ", c[i]);
}

free(a);
free(b);
free(c);

    return 0;
}
