#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    char aluno[]= "";
    float n1,n2,n3,n4,media; 

    printf("DIgite o nome do aluno\n");
    scanf("%s",&aluno);

    printf("DIgite a primeira nota\n");
    scanf("%f",&n1);

    printf("DIgite a segunda nota\n");
    scanf("%f",&n2);

    printf("DIgite a terceira nota\n");
    scanf("%f",&n3);

    printf("DIgite a quarta nota\n");
    scanf("%f",&n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("A media do aluno %s é %2f\n",aluno,media);

    if (media >= 6) {
        printf("aluno aprovado\n");
    }
    else if (media <= 4){
        printf("Aluno reprovado\n");
    }
    else {
        printf("aluno recuperação\n");
    }

return 0; 
}