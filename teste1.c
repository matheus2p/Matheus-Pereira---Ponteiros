#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <gc/gc.h>
#include <time.h>

int main(void){
const int size = 10000000;
clock_t t;
clock_t w;

t = clock();
    GC_INIT();
        for(int i = 0; i < size; i++){
            int **p = GC_MALLOC(sizeof(int));
        }
t = clock() - t;
printf ("FORAM NECESSARIOS %f SEGUNDOS PARA CARREGAR A FUNCAO DA BIBLIOTECA \n",((float)t)/CLOCKS_PER_SEC);
printf("\n");

w = clock();
    for(int i = 0; i < size; i++){
        int **j = malloc(sizeof(int));
        free(j);
    }
w = clock() - w;
printf ("FORAM NECESSARIOS %f SEGUNDOS PARA CARREGAR A FUNCAO DE ALOCACAO/LIBERACAO COM MALLOC E FREE\n",((float)w)/CLOCKS_PER_SEC);

    return 0;
}

ubuntu@ubuntu-VirtualBox:~/Área de Trabalho/Código$ gcc teste1.c -o teste1 -lgc
ubuntu@ubuntu-VirtualBox:~/Área de Trabalho/Código$ ./teste1
FORAM NECESSARIOS 0.573208 SEGUNDOS PARA CARREGAR A FUNCAO DA BIBLIOTECA 

FORAM NECESSARIOS 0.333106 SEGUNDOS PARA CARREGAR A FUNCAO DE ALOCACAO/LIBERACAO COM MALLOC E FREE
