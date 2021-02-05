#include<stdio.h>
#include<stdlib.h>

int compara(const void *a, const void *b){ // temos a função compara que tem como parâmetro dois const voids (basicamente usado para receber a variável do tipo selecionado anteriormente)
// então, será comparado dois valores com o objetivo de ordená-los em ordem crescente e será retornado um inteiro
  float calculo = *(float*)a - *(float*)b; // declaração da função calculo que recebe os valores e os subtrai
  if(calculo > 0){ // temos aqui que, caso a subtração resulte num número positivo, terá retorno de um VERDADEIRO, ou seja, o valor em a > b
    return 1;
  } if (calculo < 0){ // temos aqui que, caso a subtração resulte num número negativo, terá retorno de um FALSO, ou seja, o valor em a < b
   return -1;
  } if (calculo == 0){ // temos aqui que, caso a subtração resulte num número é porque a = b
    return 0;
  }
}
int main(){
float *p ,n;
printf("INFORME A QUANTIDADE DE NUMEROS QUE SERAO ORDENADOS: ");
scanf("%f", &n);

p = malloc(n*sizeof(float)); // alocação dinâmica para reservar um espaço para o p

for(int i = 0; i < n; i++){
   scanf("%f", (p+i));   // inserindo os elementos que serão ordenados (preferência de ordem decrescente para observar a ordenação)
}

qsort(p, n, sizeof(float), compara); // chamada da função qsort que tem como parâmetro o ponteiro p, a função de ordenação, a quantidade de número e o tamanho do tipo escolhido

printf("OS VALORES ORDENADOS SAO: \n");
for(int i = 0; i < n; i++){
   printf("%f\n", p[i]); // imprime os valores ordenados pela função ordena
}
free(p); // libera o espaço ocupado pelo vetor

    return 0;
}
