#include <stdio.h>


//1. DECLARAÇÃO DE FUNÇÕES
void recursiva_torre (int casas, int direcao);
void recursiva_bispo (int casas, int direcao);
void recursiva_rainha (int casas, int direcao);
void moveCavalo(int direcao, int move);
void menu();
void menu_movimentacao();
void movimento_peca (int mover);


//2. DETERMINAÇÃO DE COMO O MENU SERÁ EXECUTADO
int main (){
    int continuar;

    printf("***Bem-vindo ao jogo xadrez!***\n");
    printf("\n");
    
    do
    {
        menu_movimentacao();
        scanf("%d", &continuar);
        while (continuar < 1 || continuar > 5)
        {
        printf("Opção inválida. Por favor, escolha 1 a 5:\n");
        scanf("%d", &continuar);
        }

        switch (continuar){
            case 1:
                printf("Escolha em qual direção deseja mover:\n");
                menu_movimentacao();
                break;
            case 2:
                printf("Escolha em qual direção deseja mover:\n");
                menu_movimentacao();
                break;
            case 3:
                printf("Escolha em qual direção deseja mover:\n");
                menu_movimentacao();
                break;
            case 4:
                printf("Escolha em qual direção deseja mover:\n");
                menu_movimentacao();
                break;
            case 5:
                printf("Saindo do jogo agora...\n");
            break;
        }
    } while (continuar != 5);

    return 0;
}

//3. MENU
void menu() {
    
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("5. Sair\n");
    
}

//4. MENU DE MOVIMENTAÇÃO
void menu_movimentacao() { // Menu para escolher qual peça mover
    int mover;
    do {
        printf("\n");
        printf("Escolha qual peça deseja mover.\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &mover);

        if (mover >= 1 && mover <= 5) {
            movimento_peca(mover);
        } else if (mover != 5) {
            printf("Opção inválida! \n");
        } 
    } while (mover != 5);
}

//5. RECURSIDADE MOVIMENTO
void movimento_peca (int mover){
    int casas, direcao;
    switch (mover){
        case 1: //escolha torre
        printf("\n");
        printf("Você escolheu mover a Torre!\n");      
        printf("1. Para Cima\n");
        printf("2. Para Baixo\n");
        printf("3. Para Esquerda\n");
        printf("4. Para Direita\n");
        printf("Digite a direção que deseja mover: ");
        scanf("%d", &direcao);

        while (direcao < 1 || direcao > 4)
        {
            printf("\n");
            printf("Opção inválida. Escolha 1 a 4: ");
            scanf("%d", &direcao);
        }
        
        printf("\n");
        printf("De 1 até 8, digite quantas casas deseja mover:\n");
        scanf("%d", &casas);

        while (casas < 1 || casas > 8)
        {
            printf("\n");
            printf("Opção inválida. Escolha 1 a 8: ");
            scanf("%d", &casas);
        }
        
        printf("Movendo a peça...\n");
        recursiva_torre (casas, direcao);
        break;
    
        case 2: //escolha bispo
        printf("\n");
        printf("Você escolheu mover o Bispo!\n");      
        printf("1. Diagonal Superior à Direita\n");
        printf("2. Diagonal Superior à Esquerda\n");
        printf("3. Para Diagonal Inferior à Direita\n");
        printf("4. Para Diagonal Inferior e à Esquerda\n");
        printf("Digite a direção que deseja mover: ");
        scanf("%d", &direcao);

        while (direcao < 1 || direcao > 4)
        {
            printf("\n");
            printf("Opção inválida. Escolha 1 a 4: ");
            scanf("%d", &direcao);
        }
        
        printf("\n");
        printf("De 1 até 8, digite quantas casas deseja mover:\n");
        scanf("%d", &casas);

        while (casas < 1 || casas > 8)
        {
            printf("\n");
            printf("Opção inválida. Escolha 1 a 8: ");
            scanf("%d", &casas);
        }
        
        printf("Movendo a peça...\n");
        recursiva_bispo (casas, direcao);
        break;

        case 3: // escolha rainha
        printf("\n");
        printf("Você escolheu mover a Rainha!\n");      
        printf("1. Para Cima\n");
        printf("2. Para Baixo\n");
        printf("3. Para Esquerda\n");
        printf("4. Para Direita\n");
        printf("5. Diagonal Superior à Direita\n");
        printf("6. Diagonal Superior à Esquerda\n");
        printf("7. Para Diagonal Inferior à Direita\n");
        printf("8. Para Diagonal Inferior e à Esquerda\n");
        printf("Digite a direção que deseja mover: ");
        scanf("%d", &direcao);

        while (direcao < 1 || direcao > 8)
        {
            printf("\n");
            printf("Opção inválida. Escolha 1 a 8: ");
            scanf("%d", &direcao);
        }
        
        printf("\n");
        printf("De 1 até 8, digite quantas casas deseja mover:\n");
        scanf("%d", &casas);

        while (casas < 1 || casas > 8)
        {
            printf("\n");
            printf("Opção inválida. Escolha 1 a 8: ");
            scanf("%d", &casas);
        }
        
        printf("Movendo a peça...\n");
        recursiva_rainha(casas, direcao);
        break;
    
        case 4: //escolha cavalo
        do
        {
        printf("\n");
        printf("Você escolheu mover o Cavalo!\n");
        printf("1. Para Cima e para Direita\n");
        printf("2. Para Cima e para Esquerda\n");
        printf("3. Para Baixo e para Direita\n");
        printf("4. Para Baixo e para Esquerda\n");
        printf("5. Para Direita e para Baixo\n");
        printf("6. Para Direita e para Cima\n");
        printf("7. Para Esquerda e para Baixo\n");
        printf("8. Para Esquerda e para Cima\n");
        printf("9. Voltar ao Menu Principal\n");
        printf("Digite o número da opção desejada: "); // OBS: Cavalo faz o movimento em "L" 
        scanf("%d", &direcao);

        if (direcao >= 1 && direcao <= 8)
            {
            printf("\n");
            printf("Movendo o Cavalo... ");
            moveCavalo(direcao, 1);
            break;
            } else if (direcao != 9)
            {   
            printf("Opção inválida!\n");
            }

        } while (direcao != 9 );
        break;

        case 5://opção sair do jogo
            printf("Realmente deseja sair? Selecione novamente a opção para confirmar:\n");
            break;
        
        default:
            printf("Opção invalida!");
            break;
    }
}

//6. RECURSIVIDADE PEÇAS
//recursividade torre
void recursiva_torre (int casas, int direcao){
    if (casas > 0)
    {
        switch (direcao)
        {
        case 1:
        printf("Torre: Para Cima\n");
        break;

        case 2:
        printf("Torre: Para Baixo\n");
        break;

        case 3:
        printf("Torre: Para Esquerda\n");
        break;

        case 4:
        printf("Torre: Para Direita\n");
        break;

        }
        recursiva_torre(casas - 1, direcao);
    }
    
}
//recursividade bispo
void recursiva_bispo (int casas, int direcao){
    if (casas > 0)
    {
        switch (direcao)
        {
        case 1:
        printf("Bispo: Para Diagonal Superior à Direita\n"); 
        break;

        case 2:
        printf("Bispo: Para Diagonal Superior à Esquerda\n"); 
        break;

        case 3:
        printf("Bispo: Para Diagonal Inferior à Direita\n"); 
        break;

        case 4:
        printf("Bispo: Para Diagonal Inferior à Esquerda\n"); 
        break;
        }

        recursiva_bispo(casas - 1, direcao);
    }
    
}
//recursividade rainha
void recursiva_rainha (int casas, int direcao){
    if (casas > 0)
    {
        switch (direcao)
        {
        case 1:
        printf("Rainha: Para Cima\n"); //horizontal
        break;

        case 2:
        printf("Rainha: Para Baixo\n"); //horizontal
        break;

        case 3:
        printf("Rainha: Para Esquerda\n"); //vertical
        break;

        case 4:
        printf("Rainha: Para Direita\n"); //vertical
        break;

        case 5:
        printf("Rainha: Para Diagonal Superior e à Direita\n"); //diagonal superior à direita
        break;

        case 6:
        printf("Rainha: Para Diagonal Superior e à Esquerda\n"); //diagonal superior à esquerda
        break;

        case 7:
        printf("Rainha: Para Diagonal Inferior e à Direita\n"); //diagonal inferior à direita
        break;

        case 8:
        printf("Rainha: Para Diagonal Inferior e à Esquerda\n"); //diagonal inferior à esquerda
        break;
        }
        
        recursiva_rainha(casas - 1, direcao);
    }
}

//loop complexo cavalo
void moveCavalo(int direcao, int move) { //função das regras de movimentação 
        move = 1;
        switch (direcao) //estrutura de decisão para mostrar a direção 
        {
            case 1:
                move = 1;
                while (move--) //movimento permitido apenas uma vez
                { 
                    printf("\nMovendo o cavalo para cima e para a direita em (L)\n");
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cavalo: Para Cima\n"); // 2x cima 
                    }
                    printf("Cavalo: Para Direita\n"); //  1x direita             
                }
                break;
            case 2:
                move = 1;
                while (move--) //movimento permitido apenas uma vez
                { 
                    printf("\nMovendo o cavalo para cima e para a esquerda em (L)\n");
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cavalo: Para Cima\n"); // 2x cima 
                    }
                    printf("Cavalo: Para Esquerda\n"); //  1x esquerda 
                }
                break;
            case 3:
                move = 1;
                while (move--) //movimento permitido apenas uma vez
                { 
                    printf("\nMovendo o cavalo para baixo e para a direita em (L)\n");
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cavalo: Para Baixo\n"); // 2x cima 
                    }
                    printf("Cavalo: Para Direita\n"); //  1x direita 
                }
                break;
            case 4:
                move = 1;
                while (move--) //movimento permitido apenas uma vez
                {
                    printf("\nMovendo o cavalo para baixo e para a esquerda em (L)\n");
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cavalo: Para Baixo\n"); // 2x cima 
                    }
                    printf("Cavalo: Para Esquerda\n"); //  1x esquerda  
                }
                break;
            case 5:
                move = 1; 
                while (move--) //movimento permitido apenas uma vez
                {
                    printf("\nMovendo o cavalo para a direita e para baixo em (L)\n");
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cavalo: Para Direita\n"); // 2x cima 
                    }
                    printf("Cavalo: Para Baixo\n"); //  1x baixo 
                }
                break;
            case 6:
                move = 1; 
                while (move--) //movimento permitido apenas uma vez
                {
                    printf("\nMovendo o cavalo para a direita e para cima em (L)\n");
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cavalo: Para Direita\n"); // 2x cima 
                    }
                    printf("Cavalo: Para Cima\n"); //  1x cima  
                }
                break;
            case 7:
                move = 1;
                while (move--) //movimento permitido apenas uma vez
                {             
                    printf("\nMovendo o cavalo para a esquerda e para baixo em (L)\n");
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cavalo: Para Esquerda\n"); // 2x cima 
                    }
                    printf("Cavalo: Para Baixo\n"); // 1x baixo  
                }
                break;
            case 8:
                move = 1; 
                while (move--) //movimento permitido apenas uma vez
                {                 
                    printf("\nMovendo o cavalo para a esquerda e para cima em (L)\n");
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cavalo: Para Esquerda\n"); // 2x cima 
                    }
                    printf("Cavalo: Para Cima\n"); // 1x cima  
                }
                break;
        }
    }
