int salvaHistoria(int ponto_de_salvamento){
    
    FILE *arquivo_historia;

    arquivo_historia = fopen("arquivo_historia.txt", "w");

    fprintf(arquivo_historia, "%d", ponto_de_salvamento);

    fclose(arquivo_historia);
}