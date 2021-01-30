#include <stdio.h>
#include <stdlib.h>

int main()
{
        int valor;
        int *p1;
        float temp;
        float *p2;
        char aux;
        char *nome = "Ponteiros";
        char *p3;
        int idade;
        int vetor[3];
        int *p4;
        int *p5;
    /* (a) */
valor = 10; // atribuição de um número a uma variável inteira denominada de valor
p1 = &valor; // temos um ponteiro p1 que aponta para a variável valor, assim o endereço da variável é armazenado em p1
*p1 = 20; // atribuição do inteiro 20 ao endereço de memória de p1, ou seja, no espaço de memória que estava
// armazenado o número 10 na variável valor, é substituído pelo número 20, alterando o conteúdo do endereço.
printf("%d \n", valor); // imprime o número que está armazenado no endereço de memória da variávl valor que é 20.

/* (b) */
temp = 26.5; // atribuição de um  número a uma variável do tipo float denominada de temp
p2 = &temp; // temos um ponteiro p2 que aponta para a variável temp, assim o endereço da variável é armazenado em p1
*p2 = 29.0; // atribuição da variável do tipo float 29.0 ao endereço de memória de p2, ou seja, no espaço de memória que estava
// armazenado o número 26.5 na variável temp, é substituído pelo número 29.0, alterando o conteúdo do endereço.
printf("%.1f \n", temp);  // imprime o número que está armazenado no endereço de memória da variávl temp que é 29.0.

/* (c) */
p3 = &nome[0]; // um ponteiro p3 que armazena o endereço do vetor nome na posição 0.
aux = *p3; // temos uma variável aux que recebe o conteúdo de endereço armazenado em *p3
printf("%c \n", aux); // imprime a informação guardada na variável aux, que é o primeiro elemento do vetor nome,
// sendo ele a letra P

/* (d) */
p3 = &nome[4]; // um ponteiro p3 que armazena o endereço do vetor nome na posição 4.
aux = *p3;  // temos uma variável aux que recebe o conteúdo de endereço armazenado em *p3
printf("%c \n", aux); // imprime a informação guardada na variável aux, que é o quinto elemento do vetor nome,
// sendo ele a letra e

/* (e) */
p3 = nome; // um ponteiro p3 que armazena o endereço do vetor nome e, como não é atribuído uma posição, é lida a posição 0
printf("%c \n", *p3); // impreme a informação guardada no ponteiro (conteúdo do endereço do vetor na posição 0), que é a letra P

/* (f) */
p3 = p3 + 4; // o endereço de p3 é acrescido de 4 bytes (já que a variável é do tipo char = 1 byte)
printf("%c \n", *p3); // é impresso o conteúdo de endereço que o ponteiro p3 aponta com 4 bytes a mais, que é a letra t

/* (g) */
p3--; //  o endereço de p3 é decrescido de 4 bytes (já que a variável é do tipo char = 1 byte)
printf("%c \n", *p3); // é impresso o conteúdo de endereço que o ponteiro p3 aponta com 4 bytes a menos, que é o valor 31

/* (h) */
vetor[0] = 31; // atribuição do valor 31 ao vetor chamado de vetor na posição 0
vetor[1] = 45; // atribuição do valor 45 ao vetor chamado de vetor na posição 1
vetor[2] = 27; // atribuição do valor 27 ao vetor chamado de vetor na posição 2
p4 = vetor; // temos o p4 recebendo o conteúdo do endereço do vetor, e como não há posição, armazena-se do vetor na posição 0
idade = *p4; // temos a variável idade recebendo o conteúdo de endereço armazenado em p4
printf("%d \n", idade); // impresso o valor armazenado na variável idade que é 31

/* (i) */
p5 = p4 + 1; // temos que o p5 recebendo o p4 (vetor[0]) e acrescendo a ele uma unidade (vetor[1])
idade = *p5; // temos a variável idade recebendo o conteúdo de endereço armazenado em p5
printf("%d \n", idade); // impresso o valor armazenado na variável idade que é 45

/* (j) */
p4 = p5 + 1; // temos o p4 recebendo a variável que p5 aponta (vetor[1]) e acrescendo a ele 1 unidade(vetor[2])
idade = *p4; // temos a variável idade recebendo o conteúdo de endereço armazenado em p4
printf("%d \n", idade); // impresso o valor armazenado na variável idade que é 27

/* (l) */
p4 = p4 - 2; // temos que o p4 recebendo o p4 (vetor[2]) e decrescendo a ele 2 unidades (vetor[0])
idade = *p4; // temos a variável idade recebendo o conteúdo de endereço armazenado em p4
printf("%d \n", idade); // impresso o valor armazenado na variável idade que é 31

/* (m) */
p5 = &vetor[2] - 1; // temos o  p5 retornando o endereço contido no vetor[2] e decrescendo a ele 1 unidade, tendo vetor[1]
printf("%d \n", *p5); // impresso o conteúdo de endereço armazenado no ponteiro p5 que é igual a 45

/* (n) */
p5++; // temos o p5 acrescido de 1 unidade, ou seja, estava em vetor[1] e agora terá o endereço de vetor[2]
printf("%d \n", *p5);  // impresso o conteúdo de endereço armazenado no ponteiro p5 que é igual a 27

    return 0;
}
