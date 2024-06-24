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
    Monstro goblin = {
        "Goblin", //nome
        20, // vida
        1,  // ataque 
        5,  // defesa
        1,  // velocidade
        20, // xp 
        1   // nivel
        };
    return goblin;
}
//Esqueletin gerado
Monstro criarEsqueleto()
{
    Monstro goblin = {
        "Esqueleto",
        20, // vida
        1,  // ataque 
        5,  // defesa
        1, // velocidade
        20, // xp 
        1   // nivel
        };
    return goblin;
}
// O GIGANTE ESTÁ AQUI GARAIO
Monstro criarGigante()
{
    Monstro goblin = {
        "Gigante",
        20, // vida
        1,  // ataque 
        5,  // defesa
        1,  // velocidade
        20, // xp 
        1   // nivel
        };
    return goblin;
}