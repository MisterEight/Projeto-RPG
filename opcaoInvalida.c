// opcaoInvalida.c
#include "opcaoInvalida.h"
#include "limpaTerminal.h"
#include <stdio.h>
#include <stdlib.h>

void limpaTerminal();

void opcaoErrada() {
    limpaTerminal();
    printf("Opção inválida!\n");
}