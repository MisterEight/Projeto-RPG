struct Arma{
    char nome[50];
    int ataque;
};

struct Armadura{
    char nome[50];
    int defesa;
};



void criaInventario(int classe_escolhida){
    struct Arma arma;
    switch (classe_escolhida)
    {
    case 1:
        strcpy(arma.nome, "Espada Longa");
        arma.ataque = 2;
        break;
    case 2:
        strcpy(arma.nome, "Adaga");
        arma.ataque = 1;
        break;
    case 3:
        strcpy(arma.nome, "Arco longo");
        arma.ataque = 2;
        break;
    default:
        break;
    }

    struct Armadura armadura;
    switch (classe_escolhida)
    {
    case 1:
        strcpy(armadura.nome, "Armadura de placas");
        break;
    case 2:
        strcpy(armadura.nome, "Armadura de couro");
        armadura.defesa = 1;
        break;
    case 3:
        strcpy(armadura.nome, "Armadura de peles");
        armadura.defesa = 2;
        break;
    default:
        break;
    }

}
