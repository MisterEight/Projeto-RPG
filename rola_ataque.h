void rola_ataque(Jogador *jogador, Monstro *monstro)
{
    if(jogador == NULL || monstro == NULL)
    {
        printf("Erro: monstro com monstro ou personagem!");
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