#include <stdio.h>
#include <stdlib.h>
char* msg();

int main(){

    printf("%s",msg());
    return 0;
}

char* msg(){
    return "Olá";
}