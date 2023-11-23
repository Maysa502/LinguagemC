#include <stdio.h>
#include <stdlib.h> //comando system para limpar a tela 

int main(){
    
    system("/bin/clear");
    int num;
    printf("Digite um ano e lhe diremos se é ano bissexto ou não\n");
    scanf("%d",&num);
    if(num % 4 == 0)
        printf("O ano %d é bissexto\n", num);
    else
        printf("O ano %d não é bissexto\n",num);

return 0;
}