void iniciaJogo();
void jogaHistoria();
void historiaFinal();
void menuInicial();
void limpaTerminal();

int carregaHistoria() {
    int ponto_de_controle = 0;

    FILE *arquivo_historia;

    arquivo_historia = fopen("arquivo_historia.txt", "r");

    if (arquivo_historia == NULL)
    {
        limpaTerminal();
        printf("Você não tem história salva!");
        menuInicial();
    }
    

    fscanf(arquivo_historia, "%d", &ponto_de_controle);

    switch (ponto_de_controle)
    {
    case 1:
        iniciaHistoria();
        break;
    case 2:
        jogaHistoria();
        break;
    case 3:
        historiaFinal();
        break;
    }

    fclose(arquivo_historia);

}