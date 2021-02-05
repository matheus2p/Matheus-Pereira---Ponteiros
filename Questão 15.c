#include<stdio.h>
#include<stdlib.h>

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
float *p ,n, comp;
printf("INFORME A QUANTIDADE DE NUMEROS QUE SERAO ORDENADOS: ");
scanf("%f", &n);

p = malloc(n*sizeof(float)); // aloca��o din�mica para reservar um espa�o para o p

printf("INFORME OS NUMEROS A SEREM ORDENADOS: ");
for(int i = 0; i < n; i++){
   scanf("%f", (p+i));   // inserindo os elementos que ser�o ordenados (prefer�ncia de ordem decrescente para observar a ordena��o)
}

ordena(p, n, compara);

printf("OS VALORES ORDENADOS SAO: \n");
for(int i = 0; i < n; i++){
   printf("%f\n", p[i]); // imprime os valores ordenados pela fun��o ordena
}

free(p); // libera o espa�o ocupado pelo vetor

    return 0;
}
