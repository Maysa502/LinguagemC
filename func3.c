#include <stdlib.h>
#include "mat.h"

int main(){
    system("clear");
    int num[10] = {11,13,15,17,19,21,23,25,27,29};
    printf("A soma dos valores é %d\n",soma(num,10));
    printf("O maior valor é %d\n",max(num,10));
    return 0;
    
}