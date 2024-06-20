    struct ficha_personagem
{
    char nome_personagem[50];
    char classe[20];
    int pv;
    int pm;     
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
            personagem.pv = 20;
            personagem.pm = 2;
            personagem.defesa = 3;
            personagem.ataque = 1;
            personagem.velocidade = 1;
            break;
        case 2:
            strcpy(personagem.classe, "Mago");
            personagem.pv = 10;
            personagem.pm = 6;
            personagem.defesa = 1;
            personagem.ataque = 3;
            personagem.velocidade = 2;
            break;
        case 3:
            strcpy(personagem.classe, "Arqueiro");
            personagem.pv = 15;
            personagem.pm = 4;
            personagem.defesa = 2;
            personagem.ataque = 2;
            personagem.velocidade = 3;
            break;
        }
        printf("Personagem criado!");

    }

 