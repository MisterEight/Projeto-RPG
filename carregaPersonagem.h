struct ficha_personagem carregaPersonagem() {
    struct ficha_personagem personagem;

    FILE * arquivo_personagem;

    arquivo_personagem = fospen("arquivo_personagem.txt", "r");

    fgets(personagem.nome_personagem,sizeof(personagem), arquivo_personagem);
    fgets(personagem.classe,sizeof(personagem), arquivo_personagem);
    fscanf(arquivo_personagem,"%d", &personagem.pontos_de_vida);
    fscanf(arquivo_personagem,"%d", &personagem.pontos_de_mana);
    fscanf(arquivo_personagem,"%d", &personagem.ataque);
    fscanf(arquivo_personagem,"%d", &personagem.defesa);
    fscanf(arquivo_personagem,"%d", &personagem.velocidade);
    fscanf(arquivo_personagem,"%d", &personagem.xp);
    fscanf(arquivo_personagem,"%d", &personagem.nivel);
    fclose(arquivo_personagem);

    printf("Você carregou o personagem: %s", personagem.nome_personagem);
    printf("Ele é um: %s", personagem.classe);
}