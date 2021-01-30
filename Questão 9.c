#include <stdio.h>
#include <stdlib.h>


/*/ int main(){
int vet[] = {4,9,13}; // temos a declara��o de um vetor vet e, em seguida, � atribu�do a ele alguns elementos inteiros
int i; // declara��o de uma vari�vel inteira i
for(i=0;i<3;i++){ // la�o de repeti��o em que i = 0 e, enquanto i for < 3 � incrementada uma unidade a i
printf("%d ",*(vet+i)); // imprime os valores inteiros armazenados dentro do vetor vet, dentro do la�o de repeti��o
} */
int main(){
    int vet[] = {4,9,13}; // temos a declara��o de um vetor vet e, em seguida, � atribu�do a ele alguns elementos inteiros
    int i;  // declara��o de uma vari�vel inteira i
    for(i=0;i<3;i++){ // la�o de repeti��o em que i = 0 e, enquanto i for < 3 � incrementada uma unidade a i
    printf("%X ",vet+i); // imprime o endere�o dos elementos do vetor vet em forma hexadecimal a medida que o la�o se repete
    // � poss�vel observar que o endere�o varia de 4 em 4 bytes (uma vez que a vari�vel int corresponde a 4 bytes)
    }
    return 0;
}
