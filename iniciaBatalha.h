void rolaAtaque(struct ficha_personagem personagem, Monstro monstro)
{
    int dado = (rand() % 6) + 1;
    int dano = (personagem.ataque + dado) - monstro.defesa;

    if(dano < 0)
        dano = 0;

    monstro.pontos_de_vida -= dano;

    if(monstro.pontos_de_vida < 0)
        monstro.pontos_de_vida = 0;

    printf("%s ataca %s causando %d de dano!\n", personagem.nome_personagem, monstro.nome, dano); 
}

void ataqueMonstro(Monstro monstro, struct ficha_personagem personagem)
{
    int dado = (rand() % 6) + 1;
    int dano = (monstro.ataque + dado) - personagem.defesa;

    if(dano < 0)
        dano = 0;

    personagem.pontos_de_vida -= dano;

    if(personagem.pontos_de_vida < 0)
        personagem.pontos_de_vida = 0;

    printf("%s ataca %s causando %d de dano!\n", monstro.nome, personagem.nome_personagem, dano); 
}

void sistemaBatalha() {
    srand(time(NULL));


    struct ficha_personagem personagem = carregaPersonagem();

    Monstro monstro = criarGoblin();

 
    while(personagem.pontos_de_vida > 0 && monstro.pontos_de_vida > 0) {
        rolaAtaque(personagem, monstro);

        if(monstro.pontos_de_vida > 0) {
            ataqueMonstro(monstro, personagem);
        }

        printf("%s tem agora %d pontos de vida.\n", personagem.nome_personagem, personagem.pontos_de_vida);
        printf("%s tem agora %d pontos de vida.\n", monstro.nome, monstro.pontos_de_vida);
    }

    if(personagem.pontos_de_vida <= 0)
        printf("%s morreu. Game over!\n", personagem.nome_personagem);
    else if(monstro.pontos_de_vida <= 0)
        printf("%s morreu. Game over!\n", monstro.nome);
}