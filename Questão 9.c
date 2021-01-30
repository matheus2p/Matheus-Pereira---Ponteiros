#include <stdio.h>
#include <stdlib.h>


/*/ int main(){
int vet[] = {4,9,13}; // temos a declaração de um vetor vet e, em seguida, é atribuído a ele alguns elementos inteiros
int i; // declaração de uma variável inteira i
for(i=0;i<3;i++){ // laço de repetição em que i = 0 e, enquanto i for < 3 é incrementada uma unidade a i
printf("%d ",*(vet+i)); // imprime os valores inteiros armazenados dentro do vetor vet, dentro do laço de repetição
} */
int main(){
    int vet[] = {4,9,13}; // temos a declaração de um vetor vet e, em seguida, é atribuído a ele alguns elementos inteiros
    int i;  // declaração de uma variável inteira i
    for(i=0;i<3;i++){ // laço de repetição em que i = 0 e, enquanto i for < 3 é incrementada uma unidade a i
    printf("%X ",vet+i); // imprime o endereço dos elementos do vetor vet em forma hexadecimal a medida que o laço se repete
    // é possível observar que o endereço varia de 4 em 4 bytes (uma vez que a variável int corresponde a 4 bytes)
    }
    return 0;
}
