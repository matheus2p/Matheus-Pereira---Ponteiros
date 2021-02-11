#include<stdio.h>
#include<stdlib.h>

// temos a fun��o compara que tem como par�metro dois const voids
// (basicamente usado para receber a vari�vel do tipo selecionado anteriormente)
// Ent�o, ser�o comparados dois valores com o objetivo de orden�-los em ordem crescente e ser� retornado um inteiro
// Temos que, caso a subtra��o resulte num n�mero positivo, ter� retorno de um VERDADEIRO, ou seja, o valor em a > b
// Al�m disso, caso a subtra��o resulte num n�mero negativo, ter� retorno de um FALSO, ou seja, o valor em a < b
// Por fim, caso a subtra��o resulte num n�mero 0 � porque a = b

int compara(const void *a, const void *b){
  float calculo = *(float*)a - *(float*)b; // declara��o da fun��o calculo que recebe os valores e os subtrai
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

p = malloc(n*sizeof(float)); // aloca��o din�mica para reservar um espa�o para o p

// inser��o dos elementos que ser�o ordenados (prefer�ncia de ordem decrescente para observar a ordena��o)

printf("INFORME OS VALORES QUE SERAO ORDENADOS: ");
for(int i = 0; i < n; i++){
   scanf("%f", (p+i));
}

// chamada da fun��o qsort que tem como par�metro o ponteiro p, a fun��o de ordena��o, a quantidade de n�mero e o tamanho do tipo escolhido
qsort(p, n, sizeof(float), compara);

// imprime os valores ordenados pela fun��o compara

printf("OS VALORES ORDENADOS SAO: \n");
for(int i = 0; i < n; i++){
   printf("%f\n", p[i]);
}
free(p); // libera o espa�o ocupado pelo vetor

    return 0;
}
