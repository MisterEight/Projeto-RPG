void opcaoErrada();

void mostraCreditos() {
    int opcao;
    printf("Criadores:"
    "\nLeonardo Alcântara"
    "\nIsaque"
    "\nIsrael");
    printf("\n1 - Voltar: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        break;
    default:
        opcaoErrada();
        mostraCreditos();
        break;
    }
    
}