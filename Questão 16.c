// Em ambas as funções o tempo de execução foi o mesmo ou deve a diferença de 1 click
// Poucos clicks muito provavelmente advindos do pouco número de operações executadas

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int compara(const void *a, const void *b){
  float calculo = *(float*)a - *(float*)b;
  if(calculo > 0){
    return 1;
  } if (calculo < 0){
   return -1;
  } if (calculo == 0){
    return 0;
  }
}
void ordena(float *p,int qtd, int (*comparacao)(const void *a,const void *b)){
    float aux;
    for(int i = 0; i < qtd-1; i++){
        for(int j = i+1; j < qtd; j++){
            if(comparacao(p+i, p+j) > 0){
                  aux  =  *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = aux;
            }
        }
    }
}

int main(){
clock_t t;
clock_t w;
w = clock();
float *p ,n, comp, *y;
printf("INFORME A QUANTIDADE DE NUMEROS QUE SERAO ORDENADOS: ");
scanf("%f", &n);

p = malloc(n*sizeof(float)); // alocação dinâmica para reservar um espaço para o p
y = malloc(n*sizeof(float));

printf("INFORME OS NUMEROS A SEREM ORDENADOS POR PONTEIRO POR FUNCAO + QSORT: ");
for(int i = 0; i < n; i++){
   scanf("%f", (p+i));   // inserindo os elementos que serão ordenados (preferência de ordem decrescente para observar a ordenação)
}
t = clock();
ordena(p, n, compara);
t = clock() - t;
printf("OS VALORES ORDENADOS SAO: \n");
for(int i = 0; i < n; i++){
   printf("%f\n", p[i]); // imprime os valores ordenados pela função ordena
}
printf("\n");
printf ("FORAM NECESSARIOS %d CLICKS PARA CARREGAR A FUNCAO ORDENA (%f SEGUNDOS).\n",t,((double)t)/CLOCKS_PER_SEC);

free(p);

printf("\n");
printf("AGORA VAMOS PARA A PARTE 2\n");
printf("INFORME OS NUMEROS A SEREM ORDENADOS PELA FUNCAO QSORT: ");
for(int i = 0; i < n; i++){
   scanf("%f", (y+i));
}
w = clock();
qsort(y, n, sizeof(float), compara);
w = clock() - w;
printf("OS VALORES ORDENADOS SAO: \n");
for(int i = 0; i < n; i++){
   printf("%f\n", y[i]);
}

printf("\n");
printf ("FORAM NECESSARIOS %d CLICKS PARA CARREGAR A FUNCAO ORDENA (%f SEGUNDOS).\n",w,((double)w)/CLOCKS_PER_SEC);

free(y);

    return 0;
}
