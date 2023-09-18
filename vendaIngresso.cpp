#include <iostream>

int main() {

    //VARIAVEIS
    int escolhaFIlme;
    int quantidadeIngressos;
    int escolhaHora;
    int idade;

    float precoIngresso = 30.50;

    //Lista de Filmes e horarios
    char *filmes[] = {"Missão Impossivel: Acerto de Contas", "Barbie", "Besouro Azul", "Oppenheimer"};

    char *horarioSessao[][4] = {
        {"14:00", "17:15", "20:30", "21:45"},
        {"13:30", "15:30", "16:30", "18:45"},
        {"14:00", "16:40", "19:20", "22:00"},
        {"15:45", "16:00", "21:35", "21:50"},
    };

    printf("Olá Seja Bem-Vindo(a) ao CineBrasil\n");

    //Exibir as opções de filme e horarios

    printf("\nQual filme você gostaria de assistir?\n");
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, filmes[i]);

    }
    
    printf("\nDigite o número referente ao filme escolhido:");
    scanf("%d", &escolhaFIlme);

    if (escolhaFIlme <1 || escolhaFIlme > 4) {
        printf("Escolha de filme invalida. O serviço será encerrado.\n");
        return 1;
    }
    
    printf("%d .%s\n", i + 1, horarioSessao[escolhaFIlme -1 [i]]);
 
    
    
    
}