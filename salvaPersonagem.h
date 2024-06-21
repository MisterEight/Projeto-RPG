void salvaPersonagem(struct ficha_personagem personagem) {

        FILE *arquivo_personagem;

        arquivo_personagem = fopen("arquivo_personagem.txt", "w");
        fprintf(arquivo_personagem, "%s",personagem.nome_personagem);
        fprintf(arquivo_personagem, "%s\n", personagem.classe);
        fprintf(arquivo_personagem, "%d\n", personagem.pontos_de_vida);
        fprintf(arquivo_personagem, "%d\n", personagem.pontos_de_mana);
        fprintf(arquivo_personagem, "%d\n", personagem.ataque);
        fprintf(arquivo_personagem, "%d\n", personagem.defesa);
        fprintf(arquivo_personagem, "%d\n", personagem.velocidade);
        fprintf(arquivo_personagem, "%d\n", personagem.xp);
        fprintf(arquivo_personagem, "%d", personagem.nivel);
        
        fclose(arquivo_personagem);

};