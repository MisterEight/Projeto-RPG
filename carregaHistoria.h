void iniciaJogo();
void jogaHistoria();
void historiaFinal();


int carregaHistoria() {
    int ponto_de_controle = 0;

    FILE *arquivo_historia;

    arquivo_historia = fopen("arquivo_historia.txt", "r");

    fscanf(arquivo_historia, "%d", &ponto_de_controle);

    switch (ponto_de_controle)
    {
    case 1:
        iniciaJogo();
        break;
    case 2:
        jogaHistoria();
        break;
    case 3:
        historiaFinal();
        break;
    default:
        break;
    }

    fclose(arquivo_historia);

}