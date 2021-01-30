#include <stdio.h>
#include <stdlib.h>

// Inicialmente, com o problema dado, � esperado que:
// para a vari�vel do tipo char, teremos a vari�vel de byte em byte, ent�o, seria de 0 - 1 - 2, e assim, sucessivamente
// para a vari�vel do tipo int, teremos a vari�vel de 2 em 2 bytes, ent�o, seria 0 - 2 - 4, e assim, sucessivamente
// para a vari�vel do tipo float, termeos a vari�vel de 4 em 4 bytes, ent�o, seria 0 - 4 - 8, e assim, sucessivamente
// para a vari�vel do tipo double, teremos a vari�vel de 8 em 8 bytes, ent�o, seria 0 - 8 - 16, e assim, sucessivamente

int main(){
char x1[4] = {'a', 'b', 'c', 'd'};
int x2[4] = {1, 2, 3, 4};
float x3[4] = {1.3, 2.4, 3.5, 4.6};
double x4[4] = {1, 2, 3, 4};

  for(int i = 0; i < 4; i++){
   printf("%x %x %x %x \n", (x1 + i),(x2 + i),(x3 + i),(x4 + i));

   }

// Ap�s os testes, verifica-se que:
// para a vari�vel do tipo char aconteceu o esperado, ela ocupa 1 byte
// para a vari�vel do tipo int n�o aconteceu o esperado. O espa�o ocupado por ela � de 4 bytes, ent�o ter�amos de 4 em 4 bytes
//  para a vari�vel do tipo float aconteceu o esperado, ela ocupa 4 bytes
//  para a vari�vel do tipo double aconteceu o esperado, ela ocupa 8 bytes

return 0;
}
