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

void salvaPersonagem();
void iniciaHistoria();

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
            personagem.defesa = 3;
            personagem.ataque = 1;
            personagem.velocidade = 1;
            break;
        case 2:
            strcpy(personagem.classe, "Ladino");
            personagem.pontos_de_vida = 10;
            personagem.defesa = 1;
            personagem.ataque = 3;
            personagem.velocidade = 2;
            break;
        case 3:
            strcpy(personagem.classe, "Arqueiro");
            personagem.pontos_de_vida = 15;
            personagem.defesa = 2;
            personagem.ataque = 2;
            personagem.velocidade = 3;
            break;
        }

        salvaPersonagem(personagem);

        printf("Personagem criado com sucesso!");

        iniciaHistoria();
    }

 