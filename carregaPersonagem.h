void carregaPersonagem() {
    struct ficha_personagem personagem_carregado;

    FILE * arquivo_personagem;

    arquivo_personagem = fopen("arquivo_personagem.txt", "r");

    fgets(personagem_carregado.nome_personagem,"%s", arquivo_personagem);
    fgets(personagem_carregado.classe,"%s", arquivo_personagem);
    fscanf(arquivo_personagem,"%d", &personagem_carregado.pontos_de_vida);
    fscanf(arquivo_personagem,"%d", &personagem_carregado.pontos_de_mana);
    fscanf(arquivo_personagem,"%d", &personagem_carregado.ataque);
    fscanf(arquivo_personagem,"%d", &personagem_carregado.defesa);
    fscanf(arquivo_personagem,"%d", &personagem_carregado.velocidade);
    fscanf(arquivo_personagem,"%d", &personagem_carregado.xp);
    fscanf(arquivo_personagem,"%d", &personagem_carregado.nivel);
    fclose(arquivo_personagem);

    printf("\nNome: %s", personagem_carregado.nome_personagem);
    printf("\nClasse: %s", personagem_carregado.classe);
    printf("\nPontos de vida: %d", personagem_carregado.pontos_de_vida);
    printf("\nPontos de mana: %d", personagem_carregado.pontos_de_mana);
    printf("\nAtaque: %d", personagem_carregado.ataque);
    printf("\nDefesa: %d", personagem_carregado.defesa);
    printf("\nVelocidade: %d", personagem_carregado.velocidade);
    printf("\nXP: %d", personagem_carregado.xp);
    printf("\nNível: %d", personagem_carregado.nivel);
}