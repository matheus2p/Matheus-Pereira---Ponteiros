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
valor = 10; // atribui��o de um n�mero a uma vari�vel inteira denominada de valor
p1 = &valor; // temos um ponteiro p1 que aponta para a vari�vel valor, assim o endere�o da vari�vel � armazenado em p1
*p1 = 20; // atribui��o do inteiro 20 ao endere�o de mem�ria de p1, ou seja, no espa�o de mem�ria que estava
// armazenado o n�mero 10 na vari�vel valor, � substitu�do pelo n�mero 20, alterando o conte�do do endere�o.
printf("%d \n", valor); // imprime o n�mero que est� armazenado no endere�o de mem�ria da vari�vl valor que � 20.

/* (b) */
temp = 26.5; // atribui��o de um  n�mero a uma vari�vel do tipo float denominada de temp
p2 = &temp; // temos um ponteiro p2 que aponta para a vari�vel temp, assim o endere�o da vari�vel � armazenado em p1
*p2 = 29.0; // atribui��o da vari�vel do tipo float 29.0 ao endere�o de mem�ria de p2, ou seja, no espa�o de mem�ria que estava
// armazenado o n�mero 26.5 na vari�vel temp, � substitu�do pelo n�mero 29.0, alterando o conte�do do endere�o.
printf("%.1f \n", temp);  // imprime o n�mero que est� armazenado no endere�o de mem�ria da vari�vl temp que � 29.0.

/* (c) */
p3 = &nome[0]; // um ponteiro p3 que armazena o endere�o do vetor nome na posi��o 0.
aux = *p3; // temos uma vari�vel aux que recebe o conte�do de endere�o armazenado em *p3
printf("%c \n", aux); // imprime a informa��o guardada na vari�vel aux, que � o primeiro elemento do vetor nome,
// sendo ele a letra P

/* (d) */
p3 = &nome[4]; // um ponteiro p3 que armazena o endere�o do vetor nome na posi��o 4.
aux = *p3;  // temos uma vari�vel aux que recebe o conte�do de endere�o armazenado em *p3
printf("%c \n", aux); // imprime a informa��o guardada na vari�vel aux, que � o quinto elemento do vetor nome,
// sendo ele a letra e

/* (e) */
p3 = nome; // um ponteiro p3 que armazena o endere�o do vetor nome e, como n�o � atribu�do uma posi��o, � lida a posi��o 0
printf("%c \n", *p3); // impreme a informa��o guardada no ponteiro (conte�do do endere�o do vetor na posi��o 0), que � a letra P

/* (f) */
p3 = p3 + 4; // o endere�o de p3 � acrescido de 4 bytes (j� que a vari�vel � do tipo char = 1 byte)
printf("%c \n", *p3); // � impresso o conte�do de endere�o que o ponteiro p3 aponta com 4 bytes a mais, que � a letra t

/* (g) */
p3--; //  o endere�o de p3 � decrescido de 4 bytes (j� que a vari�vel � do tipo char = 1 byte)
printf("%c \n", *p3); // � impresso o conte�do de endere�o que o ponteiro p3 aponta com 4 bytes a menos, que � o valor 31

/* (h) */
vetor[0] = 31; // atribui��o do valor 31 ao vetor chamado de vetor na posi��o 0
vetor[1] = 45; // atribui��o do valor 45 ao vetor chamado de vetor na posi��o 1
vetor[2] = 27; // atribui��o do valor 27 ao vetor chamado de vetor na posi��o 2
p4 = vetor; // temos o p4 recebendo o conte�do do endere�o do vetor, e como n�o h� posi��o, armazena-se do vetor na posi��o 0
idade = *p4; // temos a vari�vel idade recebendo o conte�do de endere�o armazenado em p4
printf("%d \n", idade); // impresso o valor armazenado na vari�vel idade que � 31

/* (i) */
p5 = p4 + 1; // temos que o p5 recebendo o p4 (vetor[0]) e acrescendo a ele uma unidade (vetor[1])
idade = *p5; // temos a vari�vel idade recebendo o conte�do de endere�o armazenado em p5
printf("%d \n", idade); // impresso o valor armazenado na vari�vel idade que � 45

/* (j) */
p4 = p5 + 1; // temos o p4 recebendo a vari�vel que p5 aponta (vetor[1]) e acrescendo a ele 1 unidade(vetor[2])
idade = *p4; // temos a vari�vel idade recebendo o conte�do de endere�o armazenado em p4
printf("%d \n", idade); // impresso o valor armazenado na vari�vel idade que � 27

/* (l) */
p4 = p4 - 2; // temos que o p4 recebendo o p4 (vetor[2]) e decrescendo a ele 2 unidades (vetor[0])
idade = *p4; // temos a vari�vel idade recebendo o conte�do de endere�o armazenado em p4
printf("%d \n", idade); // impresso o valor armazenado na vari�vel idade que � 31

/* (m) */
p5 = &vetor[2] - 1; // temos o  p5 retornando o endere�o contido no vetor[2] e decrescendo a ele 1 unidade, tendo vetor[1]
printf("%d \n", *p5); // impresso o conte�do de endere�o armazenado no ponteiro p5 que � igual a 45

/* (n) */
p5++; // temos o p5 acrescido de 1 unidade, ou seja, estava em vetor[1] e agora ter� o endere�o de vetor[2]
printf("%d \n", *p5);  // impresso o conte�do de endere�o armazenado no ponteiro p5 que � igual a 27

    return 0;
}
