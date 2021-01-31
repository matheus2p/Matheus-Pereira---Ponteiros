// Um ponteiro para fun��o est� definido como uma forma de apontar para uma fun��o, isto �, da mesma forma que
// temos a usabilidade de ponteiros para vari�veis, tamb�m podemos utilizar ponteiros para fun��o para definir
// em tempo de execu��o, a fun��o a ser utilizada. Em resumo, se � definido qual fun��o ser� usada em outro ponto
// do c�digo, fazendo com que o ponteiro aponte qual ser� a fun��o a ser usada. Desse modo, podemos declarar ponteiros
// no c�digo e faz�-lo apontar para alguma fun��o de modo que o ponteiro assuma a mesma sequ�ncia l�gica da fun��o,
// como tamb�m ocorre nas vari�veis.

#include <stdio.h>
#include <stdlib.h>

float media(float n1, float n2, float n3){
return (n1+n2+n3)/3;
}

int main(){
float n1, n2, n3;
float i;
float (*ponteiro_nota)(float, float, float) = {media}; // Temos um ponteiro que receber� 3 valores do tipo float e tem como par�metro a fun��o media

printf("INFORME AS SUAS 3 NOTAS: ");
scanf("%f %f %f", &n1, &n2, &n3);

i = ponteiro_nota(n1, n2, n3); // Igualamos a uma vari�vel qualquer o ponteiro utilizado e os par�metros para a fun��o

printf("A SUA MEDIA E DE: %f\n ", i);

return 0;
}
