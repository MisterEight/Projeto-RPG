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
#include "iniciaHistoria.h"
#include "continuaHistoria.h"
#include "criar_monstro.h"
#include "salvaHistoria.h"
#include "carregaHistoria.h"
<<<<<<< HEAD
#include "historiaFinal.h"
#include "jogaHistoria.h"
#include "criaInventario.h"
#include "salvaInventario.h"
=======
#include "viajaMapas.h"
<<<<<<< HEAD
#include "iniciaBatalha.h"
=======
>>>>>>> da3dbd12de11f2bb283908e1ccd0bf7ab3748fef
>>>>>>> 9ac6ae2cb00b73c33325ae7e5ef2b38e7456030f
//#include "rola_ataque.h"
//#include "rola_dado.h"
//Bora fazer esse jogo ;/

void menuInicial(){
    int opcao;
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
        carregaHistoria();
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