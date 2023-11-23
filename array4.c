#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int num[7] = {7,17,27,37,47,57,67};
    int i=0, soma=0;
    while(i < 7){
        soma += num[i];
        i++;
    }
    printf("O resultado da soma é %d\n",soma);

    return 0;
}