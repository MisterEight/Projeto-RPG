void salvaInventario(struct Arma arma, struct Armadura armadura) {
    FILE *arquivo_inventario = fopen("inventario.txt", "w");
    if (arquivo_inventario == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    fprintf(arquivo_inventario, "Arma:\n");
    fprintf(arquivo_inventario, "Nome: %s\n", arma.nome);
    fprintf(arquivo_inventario, "Ataque: %d\n", arma.ataque);

    fprintf(arquivo_inventario, "\nArmadura:\n");
    fprintf(arquivo_inventario, "Nome: %s\n", armadura.nome);
    fprintf(arquivo_inventario, "Defesa: %d\n", armadura.defesa);

    fclose(arquivo_inventario);
}