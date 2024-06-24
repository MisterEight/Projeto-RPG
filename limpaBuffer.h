void limpaBuffer() {
    #ifdef __linux__
    int c;
        do {
            c = getchar();
        } while (c != '\n' && c != EOF);
    #elif _WIN32
        fflush(stdin);
    #endif
}