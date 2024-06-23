void limpaBuffer();

void continuaHistoria() {
    limpaBuffer();
    printf("\n1 - Continuar."
    "\n2 - Sair do jogo."
    "\nOpção: ");
    int opcao;
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        break;
    case 2:
        exit(0);   
    default:
        break;
    }
}