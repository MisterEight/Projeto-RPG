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
// Esta função daqui cria nosso bom e velho goblin
Monstro criarGoblin()
{
    Monstro goblin = {"Goblin",20,1,5,15,20,1};
    return goblin;
}
//Esqueletin gerado
Monstro criarEsqueleto()
{
    Monstro goblin = {"Esqueleto",30,10,5,15,20,1};
    return goblin;
}
// O GIGANTE ESTÁ AQUI GARAIO
Monstro criarGigante()
{
    Monstro goblin = {"Gigante", 300, 50, 35, 25, 200, 10};
    return goblin;
}