#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "creditos.h"
#include "opcaoInvalida.h"
#include "limpaTerminal.h"
#include "iniciaJogo.h"
#include "limpaBuffer.h"
#include "criaPersonagem.h"
#include "carregaPersonagem.h"
#include "salvaPersonagem.h"
//Bora fazer esse jogo ;/

void menuInicial(){
    int opcao;
    printf("Carregando...");
    do
    {
    printf("\nA lenda do herói!");
    printf("\n1 - Iniciar Aventura");
    printf("\n2 - Carregar Aventura");
    printf("\n3 - Créditos");
    printf("\n4 - Sair do jogo.");
    printf("\nOpção: ");

    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        limpaTerminal();
        iniciaJogo();
        break;
    case 2:
        carregaPersonagem();
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
    } while (opcao < 1 || opcao > 4);
    

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