#include <stdio.h>
#include <stdlib.h>

float ordena(float *p, int qtd, float aux){
    for(int i = 0; i < qtd-1; i++){
        for(int j = i+1; j < qtd; j++){
             if(p[i] > p[j]){
                 aux = p[i];
                 p[i] = p[j];
                 p[j] = aux;
        }
    }
}
}

int main(){
int n;
float aux;
float *p;
printf("INFORME A QUANTIDADE DE NUMEROS QUE SERAO ORDENADOS: ");
scanf("%d", &n);

p = malloc(n*sizeof(float));

printf("INFORME OS NUMEROS DESEJADOS: ");
for(int i = 0; i < n; i++){
    scanf("%f", &p[i]);
}
for(int i = 0; i < n; i++){
    printf("%f", *(p+i));
    printf("\n");
}

printf("OS VALORES ORDENADOS SAO: \n");

ordena(p, n, aux);

for(int i = 0; i < n; i++){
  printf("%f\n", *(p+i));
}

free(p);

return 0;
}
