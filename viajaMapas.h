void limpaTerminal();
void salvaHistoria();
void salvaPersonagem();

void viajaMapas() {
    int opcao_mapas;

    salvaHistoria(2);
    limpaTerminal();
    do
    {

    printf("\nPara onde você quer ir? "
    "\n1 - Cidade"
    "\n2 - Floresta"
    "\n3 - Montanhas"
    "\n4 - Sair do jogo."
    "\n5 - Salvar jogo."
    "\nOpção: ");
    scanf("%d", &opcao_mapas);

    switch (opcao_mapas)
    {
    case 1:
        limpaTerminal();
        sistemaBatalha();
        printf("\nVocê foi para a cidade!");
        break;
    case 2:
        limpaTerminal();
        sistemaBatalha();
        printf("\nVocê foi para a floresta!");
        break;
    case 3:
        limpaTerminal();
        sistemaBatalha();
        printf("\nVocê foi para a montanha!");
        break;
    case 4:
        exit(0);
        break;
    case 5:
        limpaTerminal();
        struct ficha_personagem personagem = carregaPersonagem();
        salvaPersonagem(personagem);
        break;
    default:
        opcaoErrada();
        break;
    } 
} while (opcao_mapas != 4);
}
