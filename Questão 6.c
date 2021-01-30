#include <stdio.h>
#include <stdlib.h>


int main(void){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;
printf("contador/valor/valor/endereco/endereco");
for(i = 0 ; i <= 4 ; i++){
printf("\ni = %d",i); // espera-se apenas os valores de i de acordo com o laço de repetição, indo de 0 a 4
printf("vet[%d] = %.1f",i, vet[i]); // temos em primeiro lugar, a representação de vet[posição i] e, o conteúdo do vetor vet naquela determinada posição
printf("*(f + %d) = %.1f",i, *(f+i)); // temos em primeiro lugar, a representação de *(f+ posição de i) e, é impresso o conteúdo do endereço que o ponteiro f retorna do vetor naquela posição i
printf("&vet[%d] = %X",i, &vet[i]); // temos em primeiro lugar, a representação de &vet[posição i] - que é o endereço do vetor vet naquela posição i e, em seguida, a representação desse endereço na forma hexadecimal
printf("(f + %d) = %X",i, f+i); // temos em primeiro lugar, a representação de *(f+ posição de i) - que é o endereço que o ponteiro f aponta naquela posição i em relação ao vetor vet na mesma posição e, em seguida, a representação desse endereço na forma hexadecimal
}

// REPRESENTAÇÃO ESPERADA APÓS COMPILAÇÃO
// contador/valor/valor/endereco/endereco
// i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = 61FDF0(f + 0) = 61FDF0
// i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = 61FDF4(f + 1) = 61FDF4
// i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = 61FDF8(f + 2) = 61FDF8
// i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = 61FDFC(f + 3) = 61FDFC
// i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = 61FE00(f + 4) = 61FE00


    return 0;
}
