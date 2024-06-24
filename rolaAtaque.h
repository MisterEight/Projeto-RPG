void rolaAtaque(Jogador *jogador, Monstro *monstro)
{
    if(jogador == NULL || monstro == NULL)
    {
        printf("Erro: monstro nulo ou personagem!");
        return;
    }

    int dado = (rand() % 6) + 1;
    int dano = (jogador->ataque + dado) - monstro->defesa;

    if(dano < 0)
        dano = 0;

    monstro->pontos_de_vida -= dano;

    if(monstro->pontos_de_vida < 0)
        monstro->pontos_de_vida = 0;

    printf("%s ataca %s causando %d de dano!\n", jogador->nome, monstro->nome, dano); 

}

void ataqueMonstro(Monstro *monstro, Jogador *jogador)
{
    if(monstro == NULL || jogador == NULL)
    {
        printf("Erro: monstro nulo ou personagem!");
        return;
    }

    int dado = (rand() % 6) + 1;
    int dano = (monstro->ataque + dado) - jogador->defesa;

    if(dano < 0)
        dano = 0;

    jogador->pontos_de_vida -= dano;

    if(jogador->pontos_de_vida < 0)
        jogador->pontos_de_vida = 0;

    printf("%s ataca %s causando %d de dano!\n", monstro->nome, jogador->nome, dano); 
}
