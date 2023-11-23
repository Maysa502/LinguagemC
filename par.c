#include <stdio.h>
#include <stdio.h>  //comando clscr para limpar a tela

int main(){
    //vamos usar o comando clrscr para 
    //limpar a tela antes de executar os demais comandos
   
    int num;
    printf("Digite um numero e lhe diremos se é par ou impar\n");
    scanf("%d",&num);
    if(num % 2 == 0)
        printf("O numero %d é par\n", num);
    else
        printf("O numero %d é impar\n",num);

return 0;

}