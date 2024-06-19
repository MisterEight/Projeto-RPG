void limpaTerminal();
void menuInicial();
void opcaoErrada();

escolhaClasse() {
    int opcao_classe;

    /*TODO: precisa criar um struct para guardar as informações para a função
    criaPersonagem();*/

    printf("Escolha sua classe: "
    "\n1 - Guerreiro"
    "\n2 - Mago"
    "\n3 - Ladino"
    "\n4 - Voltar"
    "\nOpção: ");
    scanf("%d", &opcao_classe);

    limpaTerminal();

    switch (opcao_classe)
    {
    case 1:
        printf("Você é um Guerreiro!");
        break;
    case 2:
        printf("Você é um Mago!");
        break;
    case 3:
        printf("Você é um Ladino!");
        break;
    case 4:
        menuInicial();
        break;
    default:
        opcaoErrada();
        iniciaJogo();
        break;
    }

    escolhaNome();
}

escolhaNome() {
    char nome_personagem[50];
    
    printf("\nDigite um nome em até 50 caracteres: ");
    scanf("%c", nome_personagem);

    printf("\nSeu nome é: %s", nome_personagem);
}

int iniciaJogo() {
    escolhaClasse();

}