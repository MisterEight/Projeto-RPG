    struct ficha_personagem
{
    char nome_personagem[50];
    char classe[20];
    int pontos_de_vida;
    int pontos_de_mana;     
    int ataque;
    int defesa;
    int velocidade;
    int xp;
    int nivel;
};

    void criaPersonagem(int classe_escolhida, char nome[]) {
        struct ficha_personagem personagem;

        strcpy(personagem.nome_personagem, nome);
        
        personagem.xp = 0;
        personagem.nivel = 1;

        switch (classe_escolhida)
        {
        case 1:
            strcpy(personagem.classe, "Guerreiro");
            personagem.pontos_de_vida = 20;
            personagem.pontos_de_mana = 2;
            personagem.defesa = 3;
            personagem.ataque = 1;
            personagem.velocidade = 1;
            break;
        case 2:
            strcpy(personagem.classe, "Mago");
            personagem.pontos_de_vida = 10;
            personagem.pontos_de_mana = 6;
            personagem.defesa = 1;
            personagem.ataque = 3;
            personagem.velocidade = 2;
            break;
        case 3:
            strcpy(personagem.classe, "Arqueiro");
            personagem.pontos_de_vida = 15;
            personagem.pontos_de_mana = 4;
            personagem.defesa = 2;
            personagem.ataque = 2;
            personagem.velocidade = 3;
            break;
        }

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

        printf("Personagem criado com sucesso!");
    }

 