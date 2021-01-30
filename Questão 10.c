#include <stdio.h>
#include <stdlib.h>

// Inicialmente, com o problema dado, é esperado que:
// para a variável do tipo char, teremos a variável de byte em byte, então, seria de 0 - 1 - 2, e assim, sucessivamente
// para a variável do tipo int, teremos a variável de 2 em 2 bytes, então, seria 0 - 2 - 4, e assim, sucessivamente
// para a variável do tipo float, termeos a variável de 4 em 4 bytes, então, seria 0 - 4 - 8, e assim, sucessivamente
// para a variável do tipo double, teremos a variável de 8 em 8 bytes, então, seria 0 - 8 - 16, e assim, sucessivamente

int main(){
char x1[4] = {'a', 'b', 'c', 'd'};
int x2[4] = {1, 2, 3, 4};
float x3[4] = {1.3, 2.4, 3.5, 4.6};
double x4[4] = {1, 2, 3, 4};

  for(int i = 0; i < 4; i++){
   printf("%x %x %x %x \n", (x1 + i),(x2 + i),(x3 + i),(x4 + i));

   }

// Após os testes, verifica-se que:
// para a variável do tipo char aconteceu o esperado, ela ocupa 1 byte
// para a variável do tipo int não aconteceu o esperado. O espaço ocupado por ela é de 4 bytes, então teríamos de 4 em 4 bytes
//  para a variável do tipo float aconteceu o esperado, ela ocupa 4 bytes
//  para a variável do tipo double aconteceu o esperado, ela ocupa 8 bytes

return 0;
}
