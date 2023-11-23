#include <stdio.h>
#include <stdlib.h>

int main (){
    int final_placa;
    printf("Digite o final da placa do carro\n");
    scanf("%d",&final_placa);
    
    switch (final_placa){
        case 1:
        printf("Rodizio do veiculo na segunda-feira");
        break;

        case 2:
        printf("Rodizio do veiculo na segunda-feira");
        break;

        case 3:
        printf("Rodizio do veiculo na terça-feira");
        break;

        case 4:
        printf("Rodizio do veiculo na terça-feira");
        break;

        case 5:
        printf("Rodizio do veiculo na quarta-feira");
        break;

        case 6:
        printf("Rodizio do veiculo na quarta-feira");
        break;

        case 7:
        printf("Rodizio do veiculo na quinta-feira");
        break;

        case 8:
        printf("Rodizio do veiculo na quinta-feira");
        break;

        case 9:
        printf("Rodizio do veiculo na sexta-feira");
        break;

        case 0:
        printf("Rodizio do veiculo na sexta-feira");
        break;

        default:
        printf("Este final não existe");
        break;
    }
    printf("\n");
    return 0;
}