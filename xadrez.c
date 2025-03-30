#include <stdio.h>

int main () {

printf("***Bem-vindo ao jogo xadrez!***\n");
printf("\n");

/*Direções

printf("Cima\n");
printf("Baixo\n");
printf("Esquerda\n");
printf("Direita\n");
printf("Cima Esquerda\n");
printf("Cima Direita\n");
*/

int torre;
int bispo;
int rainha;
int i = 0;
int mover;

printf("Escolha a peça que deseja mover:\n");
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
scanf("%d", &mover);

switch (mover)
{
case 1:
    //torre - Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.

    for (i = 0; i <= 5; i++)
    {
    printf("Torre move-se %d casas para direita.\n", i);
    } 
    break;

case 2:
    //bispo - Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
     
    while (i <= 5)
    {
        printf("Bispo move-se %d casas para diagonal. Cima, Direita!\n", i);
        i++;
    }
    break;

case 3:
    //rainha - Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
 
    do
    {
        printf("Rainha: move-se %d casas para esquerda!\n", i);
        i++;
    } while (i <= 8);
    break;


default:
    break;
}


return 0;


}
