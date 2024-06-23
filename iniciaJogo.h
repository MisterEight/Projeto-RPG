void limpaTerminal();
void menuInicial();
void opcaoErrada();
void limpaBuffer();
void criaPersonagem();
void iniciaJogo();
struct ficha_personagem carregaPersonagem();

void escolhaClasseNome() {
    int opcao_classe;
    char nome_personagem[50];

    /*TODO: precisa criar um struct para guardar as informações para a função
    criaPersonagem();*/
    do
    {
        printf("Escolha sua classe: "
        "\n1 - Guerreiro"
        "\n2 - Mago"
        "\n3 - Arqueiro"
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
                printf("Você é um Arqueiro!");
                break;
            case 4:
                menuInicial();
                break;
            default:
                opcaoErrada();
                break;
        }
    } while (opcao_classe < 1 || opcao_classe > 4);
    
    limpaBuffer();

    printf("\nDigite um nome em até 50 caracteres: ");
    fgets(nome_personagem, sizeof(nome_personagem), stdin);
    limpaTerminal();
    printf("Seu nome é: %s", nome_personagem);

    criaPersonagem(opcao_classe, nome_personagem);
}

void iniciaJogo() {
    escolhaClasseNome();
}