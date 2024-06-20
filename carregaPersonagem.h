void carregaPersonagem() {
    struct ficha_personagem personagem;

    FILE * arquivo_personagem;

    arquivo_personagem = fopen("arquivo_personagem.txt", "r");

    fgets(personagem.nome_personagem,"%s", arquivo_personagem);
    fgets(personagem.classe,"%s", arquivo_personagem);

    printf("\nClasse: %s", personagem.classe);
    printf("\nNome: %s", personagem.nome_personagem);
}