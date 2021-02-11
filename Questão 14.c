#include<stdio.h>
#include<stdlib.h>

// temos a função compara que tem como parâmetro dois const voids
// (basicamente usado para receber a variável do tipo selecionado anteriormente)
// Então, serão comparados dois valores com o objetivo de ordená-los em ordem crescente e será retornado um inteiro
// Temos que, caso a subtração resulte num número positivo, terá retorno de um VERDADEIRO, ou seja, o valor em a > b
// Além disso, caso a subtração resulte num número negativo, terá retorno de um FALSO, ou seja, o valor em a < b
// Por fim, caso a subtração resulte num número 0 é porque a = b

int compara(const void *a, const void *b){
  float calculo = *(float*)a - *(float*)b; // declaração da função calculo que recebe os valores e os subtrai
  if(calculo > 0){
    return 1;
  } if (calculo < 0){
   return -1;
  } if (calculo == 0){
    return 0;
  }
}
int main(){
float *p ,n;
printf("INFORME A QUANTIDADE DE NUMEROS QUE SERAO ORDENADOS: ");
scanf("%f", &n);

p = malloc(n*sizeof(float)); // alocação dinâmica para reservar um espaço para o p

// inserção dos elementos que serão ordenados (preferência de ordem decrescente para observar a ordenação)

printf("INFORME OS VALORES QUE SERAO ORDENADOS: ");
for(int i = 0; i < n; i++){
   scanf("%f", (p+i));
}

// chamada da função qsort que tem como parâmetro o ponteiro p, a função de ordenação, a quantidade de número e o tamanho do tipo escolhido
qsort(p, n, sizeof(float), compara);

// imprime os valores ordenados pela função compara

printf("OS VALORES ORDENADOS SAO: \n");
for(int i = 0; i < n; i++){
   printf("%f\n", p[i]);
}
free(p); // libera o espaço ocupado pelo vetor

    return 0;
}
