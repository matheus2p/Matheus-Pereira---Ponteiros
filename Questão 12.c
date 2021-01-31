// Um ponteiro para função está definido como uma forma de apontar para uma função, isto é, da mesma forma que
// temos a usabilidade de ponteiros para variáveis, também podemos utilizar ponteiros para função para definir
// em tempo de execução, a função a ser utilizada. Em resumo, se é definido qual função será usada em outro ponto
// do código, fazendo com que o ponteiro aponte qual será a função a ser usada. Desse modo, podemos declarar ponteiros
// no código e fazê-lo apontar para alguma função de modo que o ponteiro assuma a mesma sequência lógica da função,
// como também ocorre nas variáveis.

#include <stdio.h>
#include <stdlib.h>

float media(float n1, float n2, float n3){
return (n1+n2+n3)/3;
}

int main(){
float n1, n2, n3;
float i;
float (*ponteiro_nota)(float, float, float) = {media}; // Temos um ponteiro que receberá 3 valores do tipo float e tem como parâmetro a função media

printf("INFORME AS SUAS 3 NOTAS: ");
scanf("%f %f %f", &n1, &n2, &n3);

i = ponteiro_nota(n1, n2, n3); // Igualamos a uma variável qualquer o ponteiro utilizado e os parâmetros para a função

printf("A SUA MEDIA E DE: %f\n ", i);

return 0;
}
