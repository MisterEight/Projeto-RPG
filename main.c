#include <stdio.h>
#include <stdlib.h>
#include "creditos.h"
#include "opcaoInvalida.h"
#include "limpaTerminal.h"
//Bora fazer esse jogo ;/

void menuInicial(){
    int opcao;

    printf("A lenda do herói!"
    "\n1 - Iniciar Aventura"
    "\n2 - Carregar Aventura"
    "\n3 - Créditos"
    "\n4 - Sair do jogo."
    "\nOpção: ");

    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        //iniciaAventura();
        break;
    case 2:
        //carregaPersonagem();
        break;
    case 3:
        limpaTerminal();
        mostraCreditos();
        limpaTerminal();
        menuInicial();
        break;
    case 4:
        break;
    default:
        opcaoErrada();
        break;
    }
}

int main() {
    #ifdef _WIN32 
        system("chcp 65001");
        limpaTerminal();
    #elif __linux__
        limpaTerminal();
    #endif

    menuInicial();
}