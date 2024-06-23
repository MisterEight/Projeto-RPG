typedef struct {
    char nome[50];
    int pontos_de_vida;
    int ataque;
    int defesa;
    int velocidade;
    int xp;
    int nivel;
} Monstro;

// Função que calcula o xp que o player recebe do monstro XD :D
int xp_Monstro(Monstro monstro) {
    return monstro.xp;
}

Monstro goblin = {"Goblin", }