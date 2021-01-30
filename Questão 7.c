#include <stdio.h>
#include <stdlib.h>


int main(){
 int pulo[6] = {1, 2, 3, 4, 5, 6};
printf("%d \n", *(pulo + 2)); // resulta no valor 3, isto é, o terceiro elemento do vetor
printf("%d \n", *(pulo + 4)); // resulta no valor 5, isto é, o o quinto elemento do vetor
printf("%d \n", pulo + 4); // resulta no endereço do quinto elemento do vetor
printf("%d \n", pulo + 2); // resulta no endereço do terceiro elemento do vetor

// O resultado correto é: *(pulo + 2);
// O que coincide com as expectativas antes do teste do programa
    return 0;
}
