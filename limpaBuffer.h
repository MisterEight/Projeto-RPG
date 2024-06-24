void limpaBuffer() {
 int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}