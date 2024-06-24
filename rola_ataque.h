//mudar o nome da função ela não apenas rola o ataque
//para receber struct não precisa colocar ponteiro

void rola_ataque(Jogador *jogador, Monstro *monstro)
{
    if(jogador == NULL || monstro == NULL)
    {
        printf("Erro: monstro com monstro ou personagem!");
        return;
    }

    int dado = (rand() % 6) + 1;
    //precisa rolar o dado do monstro
    int dano = (jogador->ataque + dado) - monstro->defesa;

    if(dano < 0)
        dano = 0;

    monstro->pontos_de_vida -= dano;

    if(monstro->pontos_de_vida < 0)
        monstro->pontos_de_vida = 0;

    //Esse print deveria estar dentro de uma condicional, nem sempre os ataques irão causar dano.
    printf("%s ataca %s causando %d de dano!\n", jogador->nome, monstro->nome, dano); 

}