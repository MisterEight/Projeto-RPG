void salvaPersonagem(struct ficha_personagem personagem) {

        FILE *arquivo_personagem;

        arquivo_personagem = fopen("arquivo_personagem.txt", "w");
        fprintf(arquivo_personagem, "%s",personagem.nome_personagem);
        fprintf(arquivo_personagem, "%s", personagem.classe);
        fprintf(arquivo_personagem, "\n%d", personagem.pontos_de_mana);
        fprintf(arquivo_personagem, "\n%d", personagem.ataque);
        fprintf(arquivo_personagem, "\n%d", personagem.defesa);
        fprintf(arquivo_personagem, "\n%d", personagem.velocidade);
        fprintf(arquivo_personagem, "\n%d", personagem.xp);
        fprintf(arquivo_personagem, "\n%d", personagem.nivel);
        
        fclose(arquivo_personagem);

}