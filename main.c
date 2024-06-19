#include <stdio.h>
#include <stdlib.h>
#include "creditos.h"
#include "opcaoInvalida.h"

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
        system("cls");
        mostraCreditos();
        system("cls");
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
    system("chcp 65001");
    system("cls");

    menuInicial();
}