#include <stdlib.h>


void limpaTerminal() {
    #ifdef _WIN32
        system("cls");
    #elif __linux__
        system("clear");
    #endif
}