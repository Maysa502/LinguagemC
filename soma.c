/*programa que realiza a soma entre dois numeros*/
/*inclusão da biblioteca de cabeçario de entrada e saida*/
#include <stdio.h>

/*função principal*/
int main(){
    int numero1, numero2, resultado;
    printf("Digite um número:\n");
    scanf("%d",&numero1);

    printf("Digite outro numero:\n");
    scanf("%d",&numero2);

    resultado = numero1 + numero2; 
    printf("O resultado da soma é %d\n\n", resultado);

    printf("Posição em memória da variavel numero1 %p\n",&numero1);
   printf("Posição em memória da variavel numero2 %p\n",&numero2);
    printf("Posição em memória da variavel resultado %p\n",&resultado);
}
