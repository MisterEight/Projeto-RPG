struct Arma{
    char nome[50];
    int ataque;
};

struct Armadura{
    char nome[50];
    int defesa;
};





void criaInventario(int classe_escolhida) {
    struct Arma arma;
    struct Armadura armadura;

    switch (classe_escolhida) {
        case 1:
            strcpy(arma.nome, "Espada Longa");
            arma.ataque = 2;
            strcpy(armadura.nome, "Armadura de placas");
            armadura.defesa = 3; // Ajuste de defesa
            break;
        case 2:
            strcpy(arma.nome, "Adaga");
            arma.ataque = 1;
            strcpy(armadura.nome, "Armadura de couro");
            armadura.defesa = 2;
            break;
        case 3:
            strcpy(arma.nome, "Arco longo");
            arma.ataque = 2;
            strcpy(armadura.nome, "Armadura de peles");
            armadura.defesa = 1;
            break;
        default:
            printf("Classe inválida!\n");
            return;
    }

    salvaInventario(arma, armadura);
}
