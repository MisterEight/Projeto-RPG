void limpaTerminal();
void continuaHistoria();
int carregaHistoria();
void salvaHistoria();
void viajaMapas();
struct ficha_personagem carregaPersonagem();

void iniciaHistoria() {

    struct ficha_personagem personagem = carregaPersonagem();

    limpaTerminal();

    printf("\nVocê começa a abrir seus olhos devagar, você escuta barulhos de pessoas sorrindo e conversando, o local onde você se encontra cheira a cerveja e frango assado, você acorda dentro de uma taverna, sabendo apenas seu nome e que não lembra de como foi parar ali e de quem você é!");

    continuaHistoria();

    limpaTerminal();
    printf("\n Você levanta, sabendo que mesmo não sabendo quem é ainda precisar luta contra as forças do mal!");

    continuaHistoria();

    viajaMapas();
}