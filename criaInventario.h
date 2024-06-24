typedef struct {
    char nome[50];
    int dano;
} Arma;

typedef struct {
    int ouro;
    Arma* arma;
} Inventario;

Inventario criaInventario(int ouro, Arma* arma);
Arma criaArma(const char* nome, int dano);

    Arma espada_longa = criaArma("Espada Longa", 2);
    Arma espada_superior = criaArma("Espada Superior", 4);
    Arma adaga = criaArma("Adaga", 1);
    Arma adaga_superior = criaArma("Adaga Superior", 3);
    Arma arco = criaArma("Arco", 2);
    Arma arco_superior = criaArma("Arco Superior", 3);

