#include <stdio.h>
#include <stdlib.h>

int main (){
    system("clear");//limpar a tela
    int valor = 32;
    int novo = valor; 
    int num = 2;
    int* pnum = &num; 
    int xnum = *pnum;

    printf("o valor é %d\n",valor);
    printf("a posição de memoria de valor é %p\n",&valor);
    printf("o valor de novo é %d\n",novo);
    printf("a posição de memoria de novo é %p\n",&novo);

    printf("o valor de num é %d\n",num);
    printf("a posição de memoria de num é %p\n",pnum);
    printf("o valor de xnum é %d\n",xnum);

    return 0;
}