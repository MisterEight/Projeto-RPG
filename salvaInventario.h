void salvaInventario(struct Arma arma, struct Armadura armadura) {
    FILE *arquivo_inventario = fopen("arquivo_inventario.txt", "w");
    if (arquivo_inventario == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }


    fprintf(arquivo_inventario, "%s\n", arma.nome);
    fprintf(arquivo_inventario, "%d\n", arma.ataque);
    fprintf(arquivo_inventario, "%s\n", armadura.nome);
    fprintf(arquivo_inventario, "%d\n", armadura.defesa);

    fclose(arquivo_inventario);
}