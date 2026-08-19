#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// RESET
#define reset                       "\033[0m"
// CORES PADRÃO DE TEXTO
#define preto                       "\033[30m"
#define vermelho                    "\033[31m"
#define verde                       "\033[32m"
#define amarelo                     "\033[33m"
#define azul                        "\033[34m"
#define roxo                        "\033[35m"
#define ciano                       "\033[36m"
#define branco                      "\033[37m"
// CORES CLARAS DE TEXTO
#define preto_claro                 "\033[90m"
#define vermelho_claro              "\033[91m"
#define verde_claro                 "\033[92m"
#define amarelo_claro               "\033[93m"
#define azul_claro                  "\033[94m"
#define roxo_claro                  "\033[95m"
#define ciano_claro                 "\033[96m"
#define branco_claro                "\033[97m"
// CORES EXTRAS DE TEXTO
#define cinza_escuro                "\033[38;5;240m"
#define cinza                       "\033[38;5;245m"
#define cinza_claro                 "\033[38;5;250m"
#define vinho                       "\033[38;5;52m"
#define vermelho_escuro             "\033[38;5;88m"
#define vermelho_sangue             "\033[38;5;124m"
#define vermelho_forte              "\033[38;5;196m"
#define laranja_escuro              "\033[38;5;202m"
#define laranja                     "\033[38;5;208m"
#define laranja_claro               "\033[38;5;214m"
#define dourado                     "\033[38;5;220m"
#define ouro                        "\033[38;5;226m"
#define bege                        "\033[38;5;230m"
#define verde_escuro                "\033[38;5;22m"
#define verde_floresta              "\033[38;5;28m"
#define verde_lima                  "\033[38;5;46m"
#define verde_neon                  "\033[38;5;118m"
#define verde_agua                  "\033[38;5;49m"
#define azul_escuro                 "\033[38;5;17m"
#define azul_marinho                "\033[38;5;18m"
#define azul_real                   "\033[38;5;21m"
#define azul_celeste                "\033[38;5;39m"
#define azul_bebe                   "\033[38;5;117m"
#define ciano_escuro                "\033[38;5;30m"
#define turquesa                    "\033[38;5;45m"
#define aqua                        "\033[38;5;51m"
#define roxo_escuro                 "\033[38;5;54m"
#define violeta                     "\033[38;5;93m"
#define lilas                       "\033[38;5;135m"
#define lavanda                     "\033[38;5;183m"
#define rosa_escuro                 "\033[38;5;125m"
#define rosa                        "\033[38;5;200m"
#define rosa_claro                  "\033[38;5;218m"
#define magenta_forte               "\033[38;5;201m"
#define marrom_escuro               "\033[38;5;94m"
#define marrom                      "\033[38;5;130m"
#define cobre                       "\033[38;5;166m"
// CORES PADRÃO DE FUNDO
#define fundo_preto                 "\033[40m"
#define fundo_vermelho              "\033[41m"
#define fundo_verde                 "\033[42m"
#define fundo_amarelo               "\033[43m"
#define fundo_azul                  "\033[44m"
#define fundo_roxo                  "\033[45m"
#define fundo_ciano                 "\033[46m"
#define fundo_branco                "\033[47m"
// CORES CLARAS DE FUNDO
#define fundo_preto_claro           "\033[100m"
#define fundo_vermelho_claro        "\033[101m"
#define fundo_verde_claro           "\033[102m"
#define fundo_amarelo_claro         "\033[103m"
#define fundo_azul_claro            "\033[104m"
#define fundo_roxo_claro            "\033[105m"
#define fundo_ciano_claro           "\033[106m"
#define fundo_branco_claro          "\033[107m"
// CORES EXTRAS DE FUNDO
#define fundo_cinza_escuro          "\033[48;5;240m"
#define fundo_cinza                 "\033[48;5;245m"
#define fundo_cinza_claro           "\033[48;5;250m"
#define fundo_vinho                 "\033[48;5;52m"
#define fundo_vermelho_escuro       "\033[48;5;88m"
#define fundo_vermelho_sangue       "\033[48;5;124m"
#define fundo_vermelho_forte        "\033[48;5;196m"
#define fundo_laranja_escuro        "\033[48;5;202m"
#define fundo_laranja               "\033[48;5;208m"
#define fundo_laranja_claro         "\033[48;5;214m"
#define fundo_dourado               "\033[48;5;220m"
#define fundo_ouro                  "\033[48;5;226m"
#define fundo_bege                  "\033[48;5;230m"
#define fundo_verde_escuro          "\033[48;5;22m"
#define fundo_verde_floresta        "\033[48;5;28m"
#define fundo_verde_lima            "\033[48;5;46m"
#define fundo_verde_neon            "\033[48;5;118m"
#define fundo_verde_agua            "\033[48;5;49m"
#define fundo_azul_escuro           "\033[48;5;17m"
#define fundo_azul_marinho          "\033[48;5;18m"
#define fundo_azul_real             "\033[48;5;21m"
#define fundo_azul_celeste          "\033[48;5;39m"
#define fundo_azul_bebe             "\033[48;5;117m"
#define fundo_ciano_escuro          "\033[48;5;30m"
#define fundo_turquesa              "\033[48;5;45m"
#define fundo_aqua                  "\033[48;5;51m"
#define fundo_roxo_escuro           "\033[48;5;54m"
#define fundo_violeta               "\033[48;5;93m"
#define fundo_lilas                 "\033[48;5;135m"
#define fundo_lavanda               "\033[48;5;183m"
#define fundo_rosa_escuro           "\033[48;5;125m"
#define fundo_rosa                  "\033[48;5;200m"
#define fundo_rosa_claro            "\033[48;5;218m"
#define fundo_magenta_forte         "\033[48;5;201m"
#define fundo_marrom_escuro         "\033[48;5;94m"
#define fundo_marrom                "\033[48;5;130m"
#define fundo_cobre                 "\033[48;5;166m"
// ESTILOS DE TEXTO
#define negrito                     "\033[1m"
#define fraco                       "\033[2m"
#define italico                     "\033[3m"
#define sublinhado                  "\033[4m"
#define piscando                    "\033[5m"
#define invertido                   "\033[7m"
#define oculto                      "\033[8m"
#define riscado                     "\033[9m"
// REMOVER ESTILOS ESPECÍFICOS
#define sem_negrito                 "\033[22m"
#define sem_italico                 "\033[23m"
#define sem_sublinhado              "\033[24m"
#define sem_piscar                  "\033[25m"
#define sem_invertido               "\033[27m"
#define sem_oculto                  "\033[28m"
#define sem_riscado                 "\033[29m"
void imprimirMensagem(char msg[][120], int linhas){
    for(int i=0;i<linhas;i++){
        printf("%s\n",msg[i]);
    }
}
int main(){
    char jogador1_ganhou[15][120]={
        "JJJJJJJ    OOOOO     GGGGG      AAA    DDDDD     OOOOO    RRRRR        1",
        "   J      O     O   G          A   A   D    D   O     O   R    R      11",
        "   J      O     O   G         A     A  D     D  O     O   R     R      1",
        "   J      O     O   G  GGGG   AAAAAAA  D     D  O     O   RRRRR        1",
        "J  J      O     O   G     G   A     A  D     D  O     O   R   R        1",
        "J  J      O     O   G     G   A     A  D    D   O     O   R    R       1",
        " JJJ       OOOOO     GGGGG    A     A  DDDDD     OOOOO    R     R    11111",
        "",
        "              GGGGG      AAA    N     N  H     H   OOOOO   U     U",
        "             G          A   A   NN    N  H     H  O     O  U     U",
        "             G         A     A  N N   N  H     H  O     O  U     U",
        "             G  GGGG   AAAAAAA  N  N  N  HHHHHHH  O     O  U     U",
        "             G     G   A     A  N   N N  H     H  O     O  U     U",
        "             G     G   A     A  N    NN  H     H  O     O  U     U",
        "              GGGGG    A     A  N     N  H     H   OOOOO    UUUUU"
    };
    char jogador2_ganhou[15][120]={
        "JJJJJJJ    OOOOO     GGGGG      AAA    DDDDD     OOOOO    RRRRR       22222",
        "   J      O     O   G          A   A   D    D   O     O   R    R     2     2",
        "   J      O     O   G         A     A  D     D  O     O   R     R          2",
        "   J      O     O   G  GGGG   AAAAAAA  D     D  O     O   RRRRR         222",
        "J  J      O     O   G     G   A     A  D     D  O     O   R   R        2",
        "J  J      O     O   G     G   A     A  D    D   O     O   R    R      2",
        " JJJ       OOOOO     GGGGG    A     A  DDDDD     OOOOO    R     R    2222222",
        "",
        "              GGGGG      AAA    N     N  H     H   OOOOO   U     U",
        "             G          A   A   NN    N  H     H  O     O  U     U",
        "             G         A     A  N N   N  H     H  O     O  U     U",
        "             G  GGGG   AAAAAAA  N  N  N  HHHHHHH  O     O  U     U",
        "             G     G   A     A  N   N N  H     H  O     O  U     U",
        "             G     G   A     A  N    NN  H     H  O     O  U     U",
        "              GGGGG    A     A  N     N  H     H   OOOOO    UUUUU"
    };
    char empate[7][120]={
        "          EEEEEEE  M     M  PPPPPP     AAA    TTTTTTT  EEEEEEE",
        "          E        MM   MM  P     P   A   A      T     E",
        "          E        M M M M  P     P  A     A     T     E",
        "          EEEEE    M  M  M  PPPPPP   AAAAAAA     T     EEEEE",
        "          E        M     M  P        A     A     T     E",
        "          E        M     M  P        A     A     T     E",
        "          EEEEEEE  M     M  P        A     A     T     EEEEEEE"
    };
    char voce_ganhou[15][120]={
        "                    V     V   OOOOO    CCCCC   EEEEEEE",
        "                    V     V  O     O  C        E",
        "                    V     V  O     O  C        E",
        "                    V     V  O     O  C        EEEEE",
        "                     V   V   O     O  C        E",
        "                      V V    O     O  C        E",
        "                       V      OOOOO    CCCCC   EEEEEEE",
        "",
        "              GGGGG      AAA    N     N  H     H   OOOOO   U     U",
        "             G          A   A   NN    N  H     H  O     O  U     U",
        "             G         A     A  N N   N  H     H  O     O  U     U",
        "             G  GGGG   AAAAAAA  N  N  N  HHHHHHH  O     O  U     U",
        "             G     G   A     A  N   N N  H     H  O     O  U     U",
        "             G     G   A     A  N    NN  H     H  O     O  U     U",
        "              GGGGG    A     A  N     N  H     H   OOOOO    UUUUU"
    };
    char voce_perdeu[15][120]={
        "                    V     V   OOOOO    CCCCC   EEEEEEE",
        "                    V     V  O     O  C        E",
        "                    V     V  O     O  C        E",
        "                    V     V  O     O  C        EEEEE",
        "                     V   V   O     O  C        E",
        "                      V V    O     O  C        E",
        "                       V      OOOOO    CCCCC   EEEEEEE",
        "",
        "          PPPPPP   EEEEEEE  RRRRR    DDDDD    EEEEEEE  U     U",
        "          P     P  E        R    R   D    D   E        U     U",
        "          P     P  E        R     R  D     D  E        U     U",
        "          PPPPPP   EEEEE    RRRRR    D     D  EEEEE    U     U",
        "          P        E        R   R    D     D  E        U     U",
        "          P        E        R    R   D    D   E        U     U",
        "          P        EEEEEEE  R     R  DDDDD    EEEEEEE   UUUUU"
    };

    char computador[7][120]={
        " CCCCC    OOOOO   M     M  PPPPPP   U     U  TTTTTTT    AAA    DDDDD     OOOOO   RRRRR",
        "C        O     O  MM   MM  P     P  U     U     T      A   A   D    D   O     O  R    R",
        "C        O     O  M M M M  P     P  U     U     T     A     A  D     D  O     O  R     R",
        "C        O     O  M  M  M  PPPPPP   U     U     T     AAAAAAA  D     D  O     O  RRRRR",
        "C        O     O  M     M  P        U     U     T     A     A  D     D  O     O  R   R",
        "C        O     O  M     M  P        U     U     T     A     A  D    D   O     O  R    R",
        " CCCCC    OOOOO   M     M  P         UUUUU      T     A     A  DDDDD     OOOOO   R     R"
    };
    char *opcoes[] = {
        "Forca",
        "Labirinto",
        "Torre de Hanoi",
        "Jogo da Velha",
        "Jogo da Velha 2",
        "Sair"
    };
    int opcao = 0;
    int tecla;
    int total = 6;
    while (1) {
        system("cls");
        printf("=== MENU DE JOGOS ===\n\n");
        for (int i = 0; i < total; i++) {
            if (i == opcao)
                printf("-> %s\n", opcoes[i]);
            else
                printf("   %s\n", opcoes[i]);
        }
        tecla = getch();
        if(tecla=='w'||tecla=='W'){
            opcao--;
            if (opcao < 0){
                opcao = total - 1;
            }
        }else{
            if(tecla=='s'||tecla=='S'){
                opcao++;
                if (opcao >= total){
                    opcao = 0;
                }
            }else{
                if (tecla == 224) { 
                    tecla = getch();
                    if (tecla == 72) {
                        opcao--;
                        if (opcao < 0){
                            opcao = total - 1;
                        }
                    }else{
                        if (tecla == 80) {
                            opcao++;
                            if (opcao >= total){
                                opcao = 0;
                            }
                        }
                    }
                }else{
                    if (tecla == 13) { 
                        system("cls");
                        switch(opcao) {
                            case 0:{
                                printf("Abrindo Forca...\n");
                                char aleatorio[100];
                                printf("=== FORCA ===\n");
                                printf("\n");
                                printf("OBJETIVO:\n");
                                printf("#) Descobrir a palavra secreta antes que as tentativas acabem.\n");
                                printf("\n");
                                printf("COMO JOGAR:\n");
                                printf("#) Digite uma letra (Maiuscula) e pressione ENTER.\n");
                                printf("#) Se a letra existir na palavra, ela aparecera.\n");
                                printf("#) Se a letra nao existir, voce perde uma tentativa.\n");
                                printf("#) Venca descobrindo toda a palavra.\n");
                                printf("\n");
                                printf("Digite qualquer tecla para iniciar o jogo: ");
                                scanf("%s", aleatorio);
                                char palavra[] = "COMPUTADOR";
                                char tentativa[20] = "__________";
                                char letra;
                                int i;
                                int acerto = 0;
                                int erros = 0;
                                system("cls");
                                printf("\n");
                                if(erros == 0) {
                                    printf("\n");
                                }
                                if(erros == 1) {
                                    printf(" O\n");
                                }
                                if(erros == 2) {
                                    printf(" O\n");
                                    printf(" |\n");
                                }
                                if(erros == 3) {
                                    printf(" O\n");
                                    printf("/|\n");
                                }
                                if(erros == 4) {
                                    printf(" O\n");
                                    printf("/|\\\n");
                                }
                                if(erros == 5) {
                                    printf(" O\n");
                                    printf("/|\\\n");
                                    printf("/ \n");
                                }
                                if(erros == 6) {
                                    printf(" O\n");
                                    printf("/|\\\n");
                                    printf("/ \\\n");
                                }
                                printf("\nPalavra: %s\n", tentativa);
                                printf("Digite uma letra (com letras mainusculas): ");
                                scanf(" %c", &letra);
                                while(acerto < 10 && erros < 6) {
                                    int encontrou = 0;
                                    for(i=0; i<10; i++){
                                        if(palavra[i] == letra) {
                                            tentativa[i] = letra;
                                            encontrou = 1;
                                        }
                                    }
                                    system("cls");
                                    if(encontrou == 1){
                                        printf("Voce acertou!\n");
                                    }else{
                                        printf("Letra errada!\n");
                                        erros++;
                                    }
                                    acerto = 0;
                                    for(i = 0; i < 10; i++){
                                        if(tentativa[i] != '_'){
                                            acerto++;
                                        }
                                    }
                                    printf("\n");
                                    if(erros == 0) {
                                        printf("\n");
                                    }
                                    if(erros == 1) {
                                        printf(" O\n");
                                    }
                                    if(erros == 2) {
                                        printf(" O\n");
                                        printf(" |\n");
                                    }
                                    if(erros == 3) {
                                        printf(" O\n");
                                        printf("/|\n");
                                    }
                                    if(erros == 4) {
                                        printf(" O\n");
                                        printf("/|\\\n");
                                    }
                                    if(erros == 5) {
                                        printf(" O\n");
                                        printf("/|\\\n");
                                        printf("/ \n");
                                    }
                                    if(erros == 6) {
                                        printf(" O\n");
                                        printf("/|\\\n");
                                        printf("/ \\\n");
                                    }
                                    printf("\nPalavra: %s\n", tentativa);
                                    if(acerto < 10 && erros < 6){
                                        printf("Digite uma letra (com letras mainusculas): ");
                                        scanf(" %c", &letra);
                                    }
                                }
                                if(acerto == 10) {
                                    printf("\n");
                                    for(int i=0;i<15;i++){
                                        printf(verde_claro "%s\n" reset, voce_ganhou[i]);
                                    }
                                    printf("\n");
                                    printf("A palavra era:\n");
                                    printf("\n");
                                    for(int i=0;i<7;i++){
                                        printf(verde_claro "%s\n" reset, computador[i]);
                                    }
                                    printf("\n");
                                }else{
                                    printf("\n");
                                    for(int i=0;i<15;i++){
                                        printf(vermelho_claro "%s\n" reset, voce_perdeu[i]);
                                    }
                                    printf("\n");
                                    printf("A palavra era:\n");
                                    printf("\n");
                                    for(int i=0;i<7;i++){
                                        printf(vermelho_claro "%s\n" reset, computador[i]);
                                    }
                                    printf("\n");
                                }
                            break;
                            }
                            case 1:{
                                printf("Abrindo Labirinto...\n");
                                char labirinto[26][51] = {
                                    "##################################################",
                                    "##################################################",
                                    "EE        ##          ##          ##            ##",
                                    "##        ##          ##          ##            ##",
                                    "######    ##    ##    ##    ##    ##    ####    ##",
                                    "######    ##    ##    ##    ##    ##    ####    ##",
                                    "##        ##    ##          ##          ####    ##",
                                    "##        ##    ##          ##          ####    ##",
                                    "##    ######    ##############    ########      ##",
                                    "##    ######    ##############    ########      ##",
                                    "##              ##                ##            ##",
                                    "##              ##                ##            ##",
                                    "#############   ##    ########    ##    ##########",
                                    "#############   ##    ########    ##    ##########",
                                    "##              ##    ##          ##            ##",
                                    "##              ##    ##          ##            ##",
                                    "##    ############    ##    ################    ##",
                                    "##    ############    ##    ################    ##",
                                    "##            ##            ##            ##    ##",
                                    "##            ##            ##            ##    ##",
                                    "##########    ##    ############    ##    ##    ##",
                                    "##########    ##    ############    ##    ##    ##",
                                    "##                    ##            ##          ##",
                                    "##                    ##            ##          SS",
                                    "##################################################",
                                    "##################################################"
                                };
                                system("cls");
                                for(int i=0;i<26;i++){
                                    printf("%s\n", labirinto[i]);
                                }
                                int ii=2,jj=1,ia,ja,g=1;
                                labirinto[2][0]='(';
                                labirinto[2][1]=')';
                                char c,cc[100];
                                printf("=== LABIRINTO ===\n");
                                printf("\n");
                                printf("OBJETIVO:\n");
                                printf("#) Encontrar a saida do labirinto.\n");
                                printf("\n");
                                printf("COMO JOGAR:\n");
                                printf("#) Use as teclas do teclado:\n");
                                printf("    W Cima\n");
                                printf("    S Baixo\n");
                                printf("    A Esquerda\n");
                                printf("    D Direita\n");
                                printf("#) Caminhe pelos espacos livres.\n");
                                printf("#) Encontre a saida para vencer.\n");
                                printf("\n");
                                printf("Pressione qualquer tecla para iniciar(pressione 'g' para sair):");
                                scanf("%s", cc);
                                system("cls");
                                for(int i=0;i<26;i++){
                                    printf("%s\n", labirinto[i]);
                                }
                                do{
                                    ia=ii;
                                    ja=jj;
                                    c=_getch();
                                    switch (c){
                                        case 'a':
                                        case 'A':
                                            jj--;
                                            break;
                                        case 'd':
                                        case 'D':
                                            jj++;
                                            break; 
                                        case 'w':
                                        case 'W':
                                            ii--;
                                            break; 
                                        case 's':
                                        case 'S':
                                            ii++;
                                            break; 
                                    }
                                    if(ii>24||ii<0||jj-1>50||jj-1<0||labirinto[ii][jj-1]=='#'){
                                        ii=ia;
                                        jj=ja;
                                        continue;
                                    }
                                    if(ii>24||ii<0||jj>50||jj<0||labirinto[ii][jj]=='#'){
                                        ii=ia;
                                        jj=ja;
                                        continue;
                                    }
                                    if(labirinto[ii][jj]=='S'){
                                    system("cls");
                                    printf("\n");
                                    for(int i=0;i<15;i++){
                                        printf(verde_claro "%s\n" reset, voce_ganhou[i]);
                                    }
                                    printf("\n");            
                                        g=0;
                                        continue;
                                    }
                                    labirinto[ia][ja-1]=' ';
                                    labirinto[ia][ja]=' ';
                                    labirinto[ii][jj-1]='(';
                                    labirinto[ii][jj]=')';
                                    system("cls");
                                    for(int i=0;i<26;i++){
                                        printf("%s\n", labirinto[i]);
                                    }
                                }while(c != 'g' && g);
                            break;
                            }
                            case 2:{
                                printf("Abrindo Torre de Hanoi...\n");
                                char mm[4][27]={
                                    "   #       #       #      ",// 0
                                    "  #1#     #1#     #1#     ",// 1
                                    " ##2##   ##2##   ##2##    ",// 2
                                    "###3### ###3### ###3###   ",// 3
                                //0123456789111111111122222222223333333333444444444
                                //          012345678901234567890123456789012345678
                                };
                                int p[3][3][2];
                                p[0][0][0]=1;
                                p[0][0][1]=3;
                                p[0][1][0]=1;
                                p[0][1][1]=11;
                                p[0][2][0]=1;
                                p[0][2][1]=19;
                                p[1][0][0]=2;
                                p[1][0][1]=3;
                                p[1][1][0]=2;
                                p[1][1][1]=11;
                                p[1][2][0]=2;
                                p[1][2][1]=19;
                                p[2][0][0]=3;
                                p[2][0][1]=3;
                                p[2][1][0]=3;
                                p[2][1][1]=11;
                                p[2][2][0]=3;
                                p[2][2][1]=19;
                                system("cls");
                                for(int i=0; i<4; i++){
                                    for(int j=0; j<26; j++){
                                        if(mm[i][j]=='#'){
                                            if(mm[i][j+1]=='1'
                                            || mm[i][j-1]=='1'){
                                                printf(azul_claro "%c" reset, mm[i][j]);
                                            }else{
                                                if(mm[i][j+2]=='2'
                                                || mm[i][j+1]=='2'
                                                || mm[i][j-1]=='2'
                                                || mm[i][j-2]=='2'){
                                                    printf(amarelo_claro "%c" reset, mm[i][j]);
                                                }else{
                                                    if(mm[i][j+3]=='3'
                                                    || mm[i][j+2]=='3'
                                                    || mm[i][j+1]=='3'
                                                    || mm[i][j-1]=='3'
                                                    || mm[i][j-2]=='3'
                                                    || mm[i][j-3]=='3'){
                                                        printf(verde_claro "%c" reset, mm[i][j]);
                                                    }else{
                                                        printf("%c", mm[i][j]);
                                                    }
                                                }
                                            }
                                        }else{
                                            if(mm[i][j]=='1'){
                                                printf(azul_claro "%c" reset, mm[i][j]);
                                            }else{
                                                if(mm[i][j]=='2'){
                                                    printf(amarelo_claro "%c" reset, mm[i][j]);
                                                }else{
                                                    if(mm[i][j]=='3'){
                                                        printf(verde_claro "%c" reset, mm[i][j]);
                                                    }else{
                                                        printf("%c", mm[i][j]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    printf("\n");
                                }
                                int m[3][4];
                                char aleatorio[100];
                                printf("=== TORRE DE HANOI ===\n");
                                printf("\n");
                                printf("OBJETIVO:\n");
                                printf("#) Mover todos os discos para a ultima torre.\n");
                                printf("\n");
                                printf("COMO JOGAR:\n");
                                printf("#) Existem tres torres.\n");
                                printf("#) Voce pode mover apenas um disco por vez.\n");
                                printf("#) Um disco maior nunca pode ficar sobre um disco menor.\n");
                                printf("#) Escolha a torre de origem e a torre de destino para cada movimento.\n");
                                printf("\n");
                                printf("EXEMPLO:\n");
                                printf("#) Mover da Torre 1 para a Torre 3, ou seja, 1 3.\n");
                                printf("\n");
                                printf("DICA:\n");
                                printf("#) Tente mover os discos menores primeiro para liberar os maiores.\n");
                                printf("\n");
                                printf("Digite qualquer tecla para iniciar o jogo: ");
                                scanf("%s", aleatorio);
                                for(int i=0; i<3; i++){
                                    for(int j=1; j<3; j++){
                                        for(int e=p[i][j][1]-1; e>=p[i][j][1]-(mm[p[i][j][0]][p[i][j][1]]-'0'); e--){
                                            mm[p[i][j][0]][e]=' ';
                                        }
                                        for(int e=p[i][j][1]+1; e<=p[i][j][1]+(mm[p[i][j][0]][p[i][j][1]]-'0'); e++){
                                            mm[p[i][j][0]][e]=' ';
                                        }
                                        mm[p[i][j][0]][p[i][j][1]]='#';
                                    }
                                }
                                system("cls");
                                for(int i=0; i<4; i++){
                                    for(int j=0; j<26; j++){
                                        if(mm[i][j]=='#'){
                                            if(mm[i][j+1]=='1'
                                            || mm[i][j-1]=='1'){
                                                printf(azul_claro "%c" reset, mm[i][j]);
                                            }else{
                                                if(mm[i][j+2]=='2'
                                                || mm[i][j+1]=='2'
                                                || mm[i][j-1]=='2'
                                                || mm[i][j-2]=='2'){
                                                    printf(amarelo_claro "%c" reset, mm[i][j]);
                                                }else{
                                                    if(mm[i][j+3]=='3'
                                                    || mm[i][j+2]=='3'
                                                    || mm[i][j+1]=='3'
                                                    || mm[i][j-1]=='3'
                                                    || mm[i][j-2]=='3'
                                                    || mm[i][j-3]=='3'){
                                                        printf(verde_claro "%c" reset, mm[i][j]);
                                                    }else{
                                                        printf("%c", mm[i][j]);
                                                    }
                                                }
                                            }
                                        }else{
                                            if(mm[i][j]=='1'){
                                                printf(azul_claro "%c" reset, mm[i][j]);
                                            }else{
                                                if(mm[i][j]=='2'){
                                                    printf(amarelo_claro "%c" reset, mm[i][j]);
                                                }else{
                                                    if(mm[i][j]=='3'){
                                                        printf(verde_claro "%c" reset, mm[i][j]);
                                                    }else{
                                                        printf("%c", mm[i][j]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    printf("\n");
                                }
                                for(int i=0; i<3; i++){
                                    for(int j=0; j<3; j++){
                                        m[i][j]=0;
                                    }
                                }
                                for(int i=0;i<3;i++){
                                    m[i][0]=i+1;
                                }
                                int x,y,i,j,n;
                                printf("De qual posicao voce quer jogar e para qual posicao voce quer ir: ");
                                while(scanf("%d %d", &x, &y) && x!=123 && y!=123){
                                    x--;
                                    y--;
                                    if(x==y){
                                        printf("Voce nao pode ir para onde voce ja esta\n");
                                        continue; 
                                    }
                                    if(x>2 || y>2){
                                        printf("Numero invalido\n");
                                        continue;
                                    }
                                    for(i=0; i<3 && m[i][x]==0; i++);
                                    if(i==3){
                                        printf("Posicao de que voce quer pegar esta vazia\n");
                                        continue;
                                    }
                                    n=m[i][x];
                                    for(j=2; j>=0 && m[j][y]!=0; j--);
                                    if(j==2){
                                        m[j][y]=n;
                                        mm[p[j][y][0]][p[j][y][1]]=n+'0';
                                        for(int e=p[j][y][1]-1; e>=p[j][y][1]-(mm[p[j][y][0]][p[j][y][1]]-'0'); e--){
                                            mm[p[j][y][0]][e]='#';
                                        }
                                        for(int e=p[j][y][1]+1; e<=p[j][y][1]+(mm[p[j][y][0]][p[j][y][1]]-'0'); e++){
                                            mm[p[j][y][0]][e]='#';
                                        }
                                    }else{
                                        if(m[j+1][y]>n){
                                            m[j][y]=n;
                                            mm[p[j][y][0]][p[j][y][1]]=n+'0';
                                            for(int e=p[j][y][1]-1; e>=p[j][y][1]-(mm[p[j][y][0]][p[j][y][1]]-'0'); e--){
                                                mm[p[j][y][0]][e]='#';
                                            }
                                            for(int e=p[j][y][1]+1; e<=p[j][y][1]+(mm[p[j][y][0]][p[j][y][1]]-'0'); e++){
                                                mm[p[j][y][0]][e]='#';
                                            }
                                        }else{
                                            printf("Voce nao pode colocar uma anilha maior em cima de uma anilha menor\n");
                                            continue;
                                        }
                                    }
                                    for(int e=p[i][x][1]-1; e>=p[i][x][1]-(mm[p[i][x][0]][p[i][x][1]]-'0'); e--){
                                        mm[p[i][x][0]][e]=' ';
                                    }
                                    for(int e=p[i][x][1]+1; e<=p[i][x][1]+(mm[p[i][x][0]][p[i][x][1]]-'0'); e++){
                                        mm[p[i][x][0]][e]=' ';
                                    }
                                    mm[p[i][x][0]][p[i][x][1]]='#';
                                    m[i][x]=0;
                                    system("cls");
                                    for(int i=0; i<4; i++){
                                        for(int j=0; j<26; j++){
                                            if(mm[i][j]=='#'){
                                                if(mm[i][j+1]=='1'
                                                || mm[i][j-1]=='1'){
                                                    printf(azul_claro "%c" reset, mm[i][j]);
                                                }else{
                                                    if(mm[i][j+2]=='2'
                                                    || mm[i][j+1]=='2'
                                                    || mm[i][j-1]=='2'
                                                    || mm[i][j-2]=='2'){
                                                        printf(amarelo_claro "%c" reset, mm[i][j]);
                                                    }else{
                                                        if(mm[i][j+3]=='3'
                                                        || mm[i][j+2]=='3'
                                                        || mm[i][j+1]=='3'
                                                        || mm[i][j-1]=='3'
                                                        || mm[i][j-2]=='3'
                                                        || mm[i][j-3]=='3'){
                                                            printf(verde_claro "%c" reset, mm[i][j]);
                                                        }else{
                                                            printf("%c", mm[i][j]);
                                                        }
                                                    }
                                                }
                                            }else{
                                                if(mm[i][j]=='1'){
                                                    printf(azul_claro "%c" reset, mm[i][j]);
                                                }else{
                                                    if(mm[i][j]=='2'){
                                                        printf(amarelo_claro "%c" reset, mm[i][j]);
                                                    }else{
                                                        if(mm[i][j]=='3'){
                                                            printf(verde_claro "%c" reset, mm[i][j]);
                                                        }else{
                                                            printf("%c", mm[i][j]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        printf("\n");
                                    }
                                    for(i=0; i<3 && m[i][2]==i+1; i++);
                                    if(i==3){
                                        printf("\n");
                                        for(int i=0;i<15;i++){
                                            printf(verde_claro "%s\n" reset, voce_ganhou[i]);
                                        }
                                        printf("\n");
                                        break;
                                    }
                                    printf("De qual posicao voce quer jogar e para qual posicao voce quer ir: ");
                                }
                            break;
                            }
                            case 3:{
                                printf("Abrindo Jogo da Velha...\n");
                                char mm[36][50]={
                                    "               A A A A    B B B B     C C C C C  ",// 0
                                    "              A       A   B       B   C          ",// 1
                                    "              A       A   B       B   C          ",// 2
                                    "              A A A A A   B B B B     C          ",// 3
                                    "              A       A   B       B   C          ",// 4
                                    "              A       A   B       B   C          ",// 5
                                    "              A       A   B B B B     C C C C C  ",// 6
                                    "                        |           |            ",// 7
                                    "    111       XX     XX | OOOOOOOOO | XX     XX  ",// 8
                                    "   1111        XX   XX  | OO     OO |  XX   XX   ",// 9
                                    "    111         XX XX   | OO     OO |   XX XX    ",// 10
                                    "    111          XXX    | OO     OO |    XXX     ",// 11
                                    "    111         XX XX   | OO     OO |   XX XX    ",// 12
                                    "    111        XX   XX  | OO     OO |  XX   XX   ",// 13
                                    " 111111111    XX     XX | OOOOOOOOO | XX     XX  ",// 14
                                    "                        |           |            ",// 15
                                    "            ------------+-----------+------------",// 16
                                    "                        |           |            ",// 17
                                    " 222222222    OOOOOOOOO | XX     XX | OOOOOOOOO  ",// 18
                                    "        22    OO     OO |  XX   XX  | OO     OO  ",// 19
                                    "        22    OO     OO |   XX XX   | OO     OO  ",// 20
                                    " 222222222    OO     OO |    XXX    | OO     OO  ",// 21
                                    " 22           OO     OO |   XX XX   | OO     OO  ",// 22
                                    " 22           OO     OO |  XX   XX  | OO     OO  ",// 23
                                    " 222222222    OOOOOOOOO | XX     XX | OOOOOOOOO  ",// 24
                                    "                        |           |            ",// 25
                                    "            ------------+-----------+------------",// 26
                                    "                        |           |            ",// 27
                                    " 333333333    XX     XX | OOOOOOOOO | XX     XX  ",// 28
                                    "        33     XX   XX  | OO     OO |  XX   XX   ",// 29
                                    "        33      XX XX   | OO     OO |   XX XX    ",// 30
                                    " 333333333       XXX    | OO     OO |    XXX     ",// 31
                                    "        33      XX XX   | OO     OO |   XX XX    ",// 32
                                    "        33     XX   XX  | OO     OO |  XX   XX   ",// 33
                                    " 333333333    XX     XX | OOOOOOOOO | XX     XX  ",// 34
                                    "                        |           |            " // 35
                                //0123456789111111111122222222223333333333444444444
                                //          012345678901234567890123456789012345678
                                };
                                int p[3][3][2];
                                p[0][0][0]=8;
                                p[0][0][1]=14;
                                p[0][1][0]=8;
                                p[0][1][1]=26;
                                p[0][2][0]=8;
                                p[0][2][1]=38;
                                p[1][0][0]=18;
                                p[1][0][1]=14;
                                p[1][1][0]=18;
                                p[1][1][1]=26;
                                p[1][2][0]=18;
                                p[1][2][1]=38;
                                p[2][0][0]=28;
                                p[2][0][1]=14;
                                p[2][1][0]=28;
                                p[2][1][1]=26;
                                p[2][2][0]=28;
                                p[2][2][1]=38;
                                system("cls");
                                for(int i=0; i<36; i++){
                                    for(int j=0; j<49; j++){
                                        if(mm[i][j]=='X'){
                                            printf(azul_claro "%c" reset, mm[i][j]);
                                        }else{
                                            if(mm[i][j]=='O'){
                                                printf(vermelho_claro "%c" reset, mm[i][j]);
                                            }else{
                                                if(mm[i][j]=='3'||mm[i][j]=='2'||mm[i][j]=='1'
                                                || mm[i][j]=='C'||mm[i][j]=='B'||mm[i][j]=='A'){
                                                    printf(verde_claro "%c" reset, mm[i][j]);
                                                }else{
                                                    printf("%c", mm[i][j]);
                                                }
                                            }
                                        }
                                    }
                                    printf("\n");
                                }
                                char m[3][4];
                                char aleatorio[100];
                                printf("=== JOGO DA VELHA ===\n");
                                printf("\n");
                                printf("OBJETIVO:\n");
                                printf("#) Faca uma linha horizontal, vertical ou diagonal com 3 simbolos iguais.\n");
                                printf("#) Impedir que o adversario complete uma linha, vertical ou diagonal tambem e importante.");
                                printf("\n");
                                printf("COMO JOGAR:\n");
                                printf("#) Escolha uma posicao do tabuleiro usando as coordenadas.\n");
                                printf("#) As linhas sao 1, 2 e 3.\n");
                                printf("#) As colunas sao A, B e C.\n");
                                printf("#) Escolha a torre de origem e a torre de destino para cada movimento.\n");
                                printf("\n");
                                printf("EXEMPLO:\n");
                                printf("#) 1A = canto superior esquerdo.\n");
                                printf("#) 2B = posicao central\n");
                                printf("#) 3C = canto inferior direito\n");
                                printf("\n");
                                printf("Digite qualquer tecla para iniciar o jogo: ");
                                scanf("%s", aleatorio);
                                for(int i=0; i<3; i++){
                                    for(int j=0; j<3; j++){
                                        for(int ii=p[i][j][0]; ii<p[i][j][0]+7; ii++){
                                            for(int jj=p[i][j][1]; jj<p[i][j][1]+9; jj++){
                                                mm[ii][jj]=' ';
                                            }
                                        }
                                    }
                                }
                                system("cls");
                                for(int i=0; i<36; i++){
                                    for(int j=0; j<49; j++){
                                        if(mm[i][j]=='X'){
                                            printf(azul_claro "%c" reset, mm[i][j]);
                                        }else{
                                            if(mm[i][j]=='O'){
                                                printf(vermelho_claro "%c" reset, mm[i][j]);
                                            }else{
                                                if(mm[i][j]=='3'||mm[i][j]=='2'||mm[i][j]=='1'
                                                || mm[i][j]=='C'||mm[i][j]=='B'||mm[i][j]=='A'){
                                                    printf(verde_claro "%c" reset, mm[i][j]);
                                                }else{
                                                    printf("%c", mm[i][j]);
                                                }
                                            }
                                        }
                                    }
                                    printf("\n");
                                }
                                for(int i=0; i<3; i++){
                                    for(int j=0; j<3; j++){
                                        m[i][j]=' ';
                                    }
                                }
                                int x,y,i=-1;
                                char c,jv;
                                printf("Qual posicao voce quer jogar: ");
                                while(scanf("%d %c", &x, &c) && x!=123 && c!='+'){
                                    x--;
                                    i++;
                                    if(i%2==0){
                                        jv='X';
                                    }else{
                                        jv='O';
                                    }
                                    if(x>2){
                                        i--;
                                        printf("Numero invalido\n");
                                        continue;
                                    }
                                    if(c=='a'||c=='A'){
                                        y=0;
                                    }else{
                                        if(c=='b'||c=='B'){
                                            y=1;
                                        }else{
                                            if(c=='c'||c=='C'){
                                                y=2;
                                            }else{
                                                i--;
                                                printf("Letra invalida\n");
                                                continue;
                                            }
                                        }
                                    }
                                    if(m[x][y]=='X'||m[x][y]=='O'){
                                        i--;
                                        printf("Posicao invalida\n");
                                        continue;
                                    }
                                    m[x][y]=jv;
                                    if(i%2==0){
                                        for(int i=p[x][y][0],j=p[x][y][1]+1; i<p[x][y][0]+7; i++,j++){
                                            mm[i][j]='X';
                                            if(i<p[x][y][0]+3){
                                                mm[i][j-1]='X';
                                            }else{
                                                if(i==p[x][y][0]+3){
                                                    mm[i][j-1]='X';
                                                    mm[i][j+1]='X';
                                                }else{
                                                    mm[i][j+1]='X';
                                                }
                                            }
                                        }
                                        for(int i=p[x][y][0],j=p[x][y][1]+7; i<p[x][y][0]+7; i++,j--){
                                            mm[i][j]='X';
                                            if(i<p[x][y][0]+3){
                                                mm[i][j+1]='X';
                                            }else{
                                                if(i==p[x][y][0]+3){
                                                    mm[i][j-1]='X';
                                                    mm[i][j+1]='X';
                                                }else{
                                                    mm[i][j-1]='X';
                                                }
                                            }
                                        }
                                    }else{
                                        for(int i=p[x][y][0],j=p[x][y][1]; j<p[x][y][1]+9; j++){
                                            mm[i][j]='O';
                                        }
                                        for(int i=p[x][y][0]+6,j=p[x][y][1]; j<p[x][y][1]+9; j++){
                                            mm[i][j]='O';
                                        }
                                        for(int i=p[x][y][0]+1,j=p[x][y][1]; i<p[x][y][0]+6; i++){
                                            mm[i][j]='O';
                                            mm[i][j+1]='O';
                                        }
                                        for(int i=p[x][y][0]+1,j=p[x][y][1]+8; i<p[x][y][0]+6; i++){
                                            mm[i][j]='O';
                                            mm[i][j-1]='O';
                                        }
                                    }
                                    system("cls");
                                    for(int i=0; i<36; i++){
                                        for(int j=0; j<49; j++){
                                            if(mm[i][j]=='X'){
                                                printf(azul_claro "%c" reset, mm[i][j]);
                                            }else{
                                                if(mm[i][j]=='O'){
                                                    printf(vermelho_claro "%c" reset, mm[i][j]);
                                                }else{
                                                    if(mm[i][j]=='3'||mm[i][j]=='2'||mm[i][j]=='1'
                                                    || mm[i][j]=='C'||mm[i][j]=='B'||mm[i][j]=='A'){
                                                        printf(verde_claro "%c" reset, mm[i][j]);
                                                    }else{
                                                        printf("%c", mm[i][j]);
                                                    }
                                                }
                                            }
                                        }
                                        printf("\n");
                                    }
                                    if((m[0][0]=='X' && m[0][1]=='X' && m[0][2]=='X')||(m[1][0]=='X' && m[1][1]=='X' && m[1][2]=='X')||(m[2][0]=='X' && m[2][1]=='X' && m[2][2]=='X')
                                    || (m[0][0]=='X' && m[1][0]=='X' && m[2][0]=='X')||(m[0][1]=='X' && m[1][1]=='X' && m[2][1]=='X')||(m[0][2]=='X' && m[1][2]=='X' && m[2][2]=='X')
                                    || (m[0][0]=='X' && m[1][1]=='X' && m[2][2]=='X')||(m[0][2]=='X' && m[1][1]=='X' && m[2][0]=='X')){
                                        printf("\n");
                                        for(int i=0;i<15;i++){
                                            printf(verde_claro "%s\n" reset, jogador1_ganhou[i]);
                                        }
                                        printf("\n");
                                        break;
                                    }else{
                                        if((m[0][0]=='O' && m[0][1]=='O' && m[0][2]=='O')||(m[1][0]=='O' && m[1][1]=='O' && m[1][2]=='O')||(m[2][0]=='O' && m[2][1]=='O' && m[2][2]=='O')
                                        || (m[0][0]=='O' && m[1][0]=='O' && m[2][0]=='O')||(m[0][1]=='O' && m[1][1]=='O' && m[2][1]=='O')||(m[0][2]=='O' && m[1][2]=='O' && m[2][2]=='O')
                                        || (m[0][0]=='O' && m[1][1]=='O' && m[2][2]=='O')||(m[0][2]=='O' && m[1][1]=='O' && m[2][0]=='O')){
                                            printf("\n");
                                            for(int i=0;i<15;i++){
                                                printf(verde_claro "%s\n" reset, jogador2_ganhou[i]);
                                            }
                                            printf("\n");
                                            break;
                                        }else{
                                            if((m[0][0]=='X' || m[0][0]=='O')&&(m[0][1]=='X' || m[0][1]=='O')&&(m[0][2]=='X' || m[0][2]=='O')
                                            && (m[1][0]=='X' || m[1][0]=='O')&&(m[1][1]=='X' || m[1][1]=='O')&&(m[1][2]=='X' || m[1][2]=='O')
                                            && (m[2][0]=='X' || m[2][0]=='O')&&(m[2][1]=='X' || m[2][1]=='O')&&(m[2][2]=='X' || m[2][2]=='O')){
                                                printf("\n");
                                                for(int i=0;i<7;i++){
                                                    printf(amarelo "%s\n" reset, empate[i]);
                                                }
                                                printf("\n");
                                                break;
                                            }
                                        }
                                    }
                                    printf("Qual posicao voce quer jogar: ");
                                }
                            break;
                            }
                            case 4:{
                                printf("Abrindo Jogo da Velha 2...\n");
                                char mg[38][68]={
                                    "                   A A A A          B B B B           C C C C C     ",// 0
                                    "                  A       A         B       B         C             ",// 1
                                    "                  A       A         B       B         C             ",// 2
                                    "                  A A A A A         B B B B           C             ",// 3
                                    "                  A       A         B       B         C             ",// 4
                                    "                  A       A         B       B         C             ",// 5
                                    "                  A       A         B B B B           C C C C C     ",// 6
                                    "            <><><><><><><><><><><><><><><><><><><><><><><><><><><><>",// 7
                                    "            <>      A B C     <>      A B C     <>      A B C     <>",// 8
                                    "    111     <>   ###########  <>   ###########  <>   ###########  <>",// 9
                                    "   1111     <> 1 #  X|X|X  #  <> 1 #  X|X|X  #  <> 1 #  X|X|X  #  <>",// 10
                                    "    111     <>   # --+-+-- #  <>   # --+-+-- #  <>   # --+-+-- #  <>",// 11
                                    "    111     <> 2 #  X|X|X  #  <> 2 #  X|X|X  #  <> 2 #  X|X|X  #  <>",// 12
                                    "    111     <>   # --+-+-- #  <>   # --+-+-- #  <>   # --+-+-- #  <>",// 13
                                    "    111     <> 3 #  X|X|X  #  <> 3 #  X|X|X  #  <> 3 #  X|X|X  #  <>",// 14
                                    " 111111111  <>   ###########  <>   ###########  <>   ###########  <>",// 15
                                    "            <>                <>                <>                <>",// 16
                                    "            <><><><><><><><><><><><><><><><><><><><><><><><><><><><>",// 17
                                    "            <>      A B C     <>      A B C     <>      A B C     <>",// 18
                                    " 222222222  <>   ###########  <>   ###########  <>   ###########  <>",// 19
                                    "        22  <> 1 #  X|X|X  #  <> 1 #  X|X|X  #  <> 1 #  X|X|X  #  <>",// 20
                                    "        22  <>   # --+-+-- #  <>   # --+-+-- #  <>   # --+-+-- #  <>",// 21
                                    " 222222222  <> 2 #  X|X|X  #  <> 2 #  X|X|X  #  <> 2 #  X|X|X  #  <>",// 22
                                    " 22         <>   # --+-+-- #  <>   # --+-+-- #  <>   # --+-+-- #  <>",// 23
                                    " 22         <> 3 #  X|X|X  #  <> 3 #  X|X|X  #  <> 3 #  X|X|X  #  <>",// 24
                                    " 222222222  <>   ###########  <>   ###########  <>   ###########  <>",// 25
                                    "            <>                <>                <>                <>",// 26
                                    "            <><><><><><><><><><><><><><><><><><><><><><><><><><><><>",// 27
                                    "            <>      A B C     <>      A B C     <>      A B C     <>",// 28
                                    " 333333333  <>   ###########  <>   ###########  <>   ###########  <>",// 29
                                    "        33  <> 1 #  X|X|X  #  <> 1 #  X|X|X  #  <> 1 #  X|X|X  #  <>",// 30
                                    "        33  <>   # --+-+-- #  <>   # --+-+-- #  <>   # --+-+-- #  <>",// 31
                                    " 333333333  <> 2 #  X|X|X  #  <> 2 #  X|X|X  #  <> 2 #  X|X|X  #  <>",// 32
                                    "        33  <>   # --+-+-- #  <>   # --+-+-- #  <>   # --+-+-- #  <>",// 33
                                    "        33  <> 3 #  X|X|X  #  <> 3 #  X|X|X  #  <> 3 #  X|X|X  #  <>",// 34
                                    " 333333333  <>   ###########  <>   ###########  <>   ###########  <>",// 35
                                    "            <>                <>                <>                <>",// 36
                                    "            <><><><><><><><><><><><><><><><><><><><><><><><><><><><>" // 37
                                //01234567891111111111222222222233333333334444444444555555555566666666
                                //          0123456789012345678901234567890123456789012345678901234567
                                };
                                int p[3][3][3][3][2];
                                //00
                                p[0][0][0][0][0]=10;
                                p[0][0][0][0][1]=20;
                                p[0][0][0][1][0]=10;
                                p[0][0][0][1][1]=22;
                                p[0][0][0][2][0]=10;
                                p[0][0][0][2][1]=24;
                                p[0][0][1][0][0]=12;
                                p[0][0][1][0][1]=20;
                                p[0][0][1][1][0]=12;
                                p[0][0][1][1][1]=22;
                                p[0][0][1][2][0]=12;
                                p[0][0][1][2][1]=24;
                                p[0][0][2][0][0]=14;
                                p[0][0][2][0][1]=20;
                                p[0][0][2][1][0]=14;
                                p[0][0][2][1][1]=22;
                                p[0][0][2][2][0]=14;
                                p[0][0][2][2][1]=24;
                                //01
                                p[0][1][0][0][0]=10;
                                p[0][1][0][0][1]=38;
                                p[0][1][0][1][0]=10;
                                p[0][1][0][1][1]=40;
                                p[0][1][0][2][0]=10;
                                p[0][1][0][2][1]=42;
                                p[0][1][1][0][0]=12;
                                p[0][1][1][0][1]=38;
                                p[0][1][1][1][0]=12;
                                p[0][1][1][1][1]=40;
                                p[0][1][1][2][0]=12;
                                p[0][1][1][2][1]=42;
                                p[0][1][2][0][0]=14;
                                p[0][1][2][0][1]=38;
                                p[0][1][2][1][0]=14;
                                p[0][1][2][1][1]=40;
                                p[0][1][2][2][0]=14;
                                p[0][1][2][2][1]=42;
                                //02
                                p[0][2][0][0][0]=10;
                                p[0][2][0][0][1]=56;
                                p[0][2][0][1][0]=10;
                                p[0][2][0][1][1]=58;
                                p[0][2][0][2][0]=10;
                                p[0][2][0][2][1]=60;
                                p[0][2][1][0][0]=12;
                                p[0][2][1][0][1]=56;
                                p[0][2][1][1][0]=12;
                                p[0][2][1][1][1]=58;
                                p[0][2][1][2][0]=12;
                                p[0][2][1][2][1]=60;
                                p[0][2][2][0][0]=14;
                                p[0][2][2][0][1]=56;
                                p[0][2][2][1][0]=14;
                                p[0][2][2][1][1]=58;
                                p[0][2][2][2][0]=14;
                                p[0][2][2][2][1]=60;
                                //10
                                p[1][0][0][0][1]=20;
                                p[1][0][0][0][0]=20;
                                p[1][0][0][1][1]=22;
                                p[1][0][0][1][0]=20;
                                p[1][0][0][2][1]=24;
                                p[1][0][0][2][0]=20;
                                p[1][0][1][0][1]=20;
                                p[1][0][1][0][0]=22;
                                p[1][0][1][1][1]=22;
                                p[1][0][1][1][0]=22;
                                p[1][0][1][2][1]=24;
                                p[1][0][1][2][0]=22;
                                p[1][0][2][0][1]=20;
                                p[1][0][2][0][0]=24;
                                p[1][0][2][1][1]=22;
                                p[1][0][2][1][0]=24;
                                p[1][0][2][2][1]=24;
                                p[1][0][2][2][0]=24;
                                //11
                                p[1][1][0][0][0]=20;
                                p[1][1][0][0][1]=38;
                                p[1][1][0][1][0]=20;
                                p[1][1][0][1][1]=40;
                                p[1][1][0][2][0]=20;
                                p[1][1][0][2][1]=42;
                                p[1][1][1][0][0]=22;
                                p[1][1][1][0][1]=38;
                                p[1][1][1][1][0]=22;
                                p[1][1][1][1][1]=40;
                                p[1][1][1][2][0]=22;
                                p[1][1][1][2][1]=42;
                                p[1][1][2][0][0]=24;
                                p[1][1][2][0][1]=38;
                                p[1][1][2][1][0]=24;
                                p[1][1][2][1][1]=40;
                                p[1][1][2][2][0]=24;
                                p[1][1][2][2][1]=42;
                                //12
                                p[1][2][0][0][0]=20;
                                p[1][2][0][0][1]=56;
                                p[1][2][0][1][0]=20;
                                p[1][2][0][1][1]=58;
                                p[1][2][0][2][0]=20;
                                p[1][2][0][2][1]=60;
                                p[1][2][1][0][0]=22;
                                p[1][2][1][0][1]=56;
                                p[1][2][1][1][0]=22;
                                p[1][2][1][1][1]=58;
                                p[1][2][1][2][0]=22;
                                p[1][2][1][2][1]=60;
                                p[1][2][2][0][0]=24;
                                p[1][2][2][0][1]=56;
                                p[1][2][2][1][0]=24;
                                p[1][2][2][1][1]=58;
                                p[1][2][2][2][0]=24;
                                p[1][2][2][2][1]=60;
                                //20
                                p[2][0][0][0][0]=30;
                                p[2][0][0][0][1]=20;
                                p[2][0][0][1][0]=30;
                                p[2][0][0][1][1]=22;
                                p[2][0][0][2][0]=30;
                                p[2][0][0][2][1]=24;
                                p[2][0][1][0][0]=32;
                                p[2][0][1][0][1]=20;
                                p[2][0][1][1][0]=32;
                                p[2][0][1][1][1]=22;
                                p[2][0][1][2][0]=32;
                                p[2][0][1][2][1]=24;
                                p[2][0][2][0][0]=34;
                                p[2][0][2][0][1]=20;
                                p[2][0][2][1][0]=34;
                                p[2][0][2][1][1]=22;
                                p[2][0][2][2][0]=34;
                                p[2][0][2][2][1]=24;
                                //21
                                p[2][1][0][0][0]=30;
                                p[2][1][0][0][1]=38;
                                p[2][1][0][1][0]=30;
                                p[2][1][0][1][1]=40;
                                p[2][1][0][2][0]=30;
                                p[2][1][0][2][1]=42;
                                p[2][1][1][0][0]=32;
                                p[2][1][1][0][1]=38;
                                p[2][1][1][1][0]=32;
                                p[2][1][1][1][1]=40;
                                p[2][1][1][2][0]=32;
                                p[2][1][1][2][1]=42;
                                p[2][1][2][0][0]=34;
                                p[2][1][2][0][1]=38;
                                p[2][1][2][1][0]=34;
                                p[2][1][2][1][1]=40;
                                p[2][1][2][2][0]=34;
                                p[2][1][2][2][1]=42;
                                //22
                                p[2][2][0][0][0]=30;
                                p[2][2][0][0][1]=56;
                                p[2][2][0][1][0]=30;
                                p[2][2][0][1][1]=58;
                                p[2][2][0][2][0]=30;
                                p[2][2][0][2][1]=60;
                                p[2][2][1][0][0]=32;
                                p[2][2][1][0][1]=56;
                                p[2][2][1][1][0]=32;
                                p[2][2][1][1][1]=58;
                                p[2][2][1][2][0]=32;
                                p[2][2][1][2][1]=60;
                                p[2][2][2][0][0]=34;
                                p[2][2][2][0][1]=56;
                                p[2][2][2][1][0]=34;
                                p[2][2][2][1][1]=58;
                                p[2][2][2][2][0]=34;
                                p[2][2][2][2][1]=60;
                                
                                int pp[3][3][2];
                                pp[0][0][0]=9;
                                pp[0][0][1]=17;
                                pp[0][1][0]=9;
                                pp[0][1][1]=35;
                                pp[0][2][0]=9;
                                pp[0][2][1]=53;
                                pp[1][0][0]=19;
                                pp[1][0][1]=17;
                                pp[1][1][0]=19;
                                pp[1][1][1]=35;
                                pp[1][2][0]=19;
                                pp[1][2][1]=53;
                                pp[2][0][0]=29;
                                pp[2][0][1]=17;
                                pp[2][1][0]=29;
                                pp[2][1][1]=35;
                                pp[2][2][0]=29;
                                pp[2][2][1]=53;
                                
                                //alterar pl diminuindo 1 detodos os finais 1; 
                                int pl[3][3][2];
                                pl[0][0][0]=9;
                                pl[0][0][1]=18;
                                pl[0][1][0]=9;
                                pl[0][1][1]=36;
                                pl[0][2][0]=9;
                                pl[0][2][1]=54;
                                pl[1][0][0]=19;
                                pl[1][0][1]=18;
                                pl[1][1][0]=19;
                                pl[1][1][1]=36;
                                pl[1][2][0]=19;
                                pl[1][2][1]=54;
                                pl[2][0][0]=29;
                                pl[2][0][1]=18;
                                pl[2][1][0]=29;
                                pl[2][1][1]=36;
                                pl[2][2][0]=29;
                                pl[2][2][1]=54;
                                
                                int pm[3][3][2];
                                pm[0][0][0]=0;
                                pm[0][0][1]=0;
                                pm[0][1][0]=0;
                                pm[0][1][1]=3;
                                pm[0][2][0]=0;
                                pm[0][2][1]=6;
                                pm[1][0][0]=3;
                                pm[1][0][1]=0;
                                pm[1][1][0]=3;
                                pm[1][1][1]=3;
                                pm[1][2][0]=3;
                                pm[1][2][1]=6;
                                pm[2][0][0]=6;
                                pm[2][0][1]=0;
                                pm[2][1][0]=6;
                                pm[2][1][1]=3;
                                pm[2][2][0]=6;
                                pm[2][2][1]=6;

                                system("cls");
                                for(int i=0; i<38; i++){
                                    for(int j=0; j<68; j++){
                                        if(mg[i][j]=='X'){
                                            printf(azul_claro "%c" reset, mg[i][j]);
                                        }else{
                                            if(mg[i][j]=='O'){
                                                printf(vermelho_claro "%c" reset, mg[i][j]);
                                            }else{
                                                if(mg[i][j]=='#'){
                                                    printf(amarelo_claro "%c" reset, mg[i][j]);
                                                }else{
                                                    if(mg[i][j]=='3'||mg[i][j]=='2'||mg[i][j]=='1'
                                                    || mg[i][j]=='C'||mg[i][j]=='B'||mg[i][j]=='A'){
                                                        printf(verde_claro "%c" reset, mg[i][j]);
                                                    }else{
                                                        printf("%c", mg[i][j]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    printf("\n");
                                }

                                char aleatorio[100];
                                printf("=== JOGO DA VELHA 2 ===\n");
                                printf("\n");
                                printf("OBJETIVO:\n");
                                printf("#) Vencer o tabuleiro grande conquistando 3 tabuleiros pequenos em linha, vertical ou diagonal.\n");
                                printf("#) Faca uma linha horizontal, vertical ou diagonal com 3 simbolos iguais nos pequenos.\n");
                                printf("#) Impedir que o adversario complete uma linha, vertical ou diagonal tambem e importante.\n");
                                printf("\n");
                                printf("COMO JOGAR:\n");
                                printf("#) As linhas sao 1, 2 e 3 isso tanto para o pequeno quanto para o grande.\n");
                                printf("#) As colunas sao A, B e C isso tanto para o pequeno quanto para o grande.\n");
                                printf("#) O tabuleiro e formado por 9 jogos da velha menores, com cordenadas 1,2,3 e A,B,C.\n");
                                printf("#) Escolha uma posicao do tabuleiro usando as coordenadas.\n");
                                printf("#) Quando voce vence um tabuleiro pequeno, ele passa a ser seu e se der empate ele vale para os dois jogadores.\n");
                                printf("#) Na primeira rodada o jogador 1 poera jogar onde ele quiser.\n");
                                printf("#) Na proxima jogada o jogador 2 jogara no quadrante que foi jogado pelo jogador 1 na rodada passada.\n");
                                printf("#) Ou seja, sua jogada determina em qual tabuleiro o proximo jogador devera jogar.\n");
                                printf("#) Se o tabuleiro indicado ja estiver completo, o jogador podera escolher outro disponivel.\n");
                                printf("\n");
                                printf("DICA:\n");
                                printf("#) Nao pense apenas no tabuleiro pequeno.\n");
                                printf("#) Tente planejar jogadas para conquistar o tabuleiro grande.\n");
                                printf("\n");
                                printf("Digite qualquer tecla para iniciar o jogo: ");
                                scanf("%s", aleatorio);
                                char mp[3][4],mm[9][10];
                                for(int i=0; i<3; i++){
                                    for(int j=0; j<3; j++){
                                        for(int k=0; k<3; k++){
                                            for(int l=0; l<3; l++){
                                                mg[p[i][j][k][l][0]][p[i][j][k][l][1]]=' ';
                                            }
                                        }
                                    }
                                }
                                for(int k=0; k<3; k++){
                                    for(int l=0; l<3; l++){
                                        for(int i=0; i<11; i++){
                                            mg[pp[k][l][0]][pp[k][l][1]+i]=' ';
                                        }
                                        for(int i=0; i<11; i++){
                                            mg[pp[k][l][0]+6][pp[k][l][1]+i]=' ';
                                        }
                                        for(int i=1; i<6; i++){
                                            mg[pp[k][l][0]+i][pp[k][l][1]]=' ';
                                        }
                                        for(int i=1; i<6; i++){
                                            mg[pp[k][l][0]+i][pp[k][l][1]+10]=' ';
                                        }
                                    }
                                }

                                system("cls");
                                for(int i=0; i<38; i++){
                                    for(int j=0; j<68; j++){
                                        if(mg[i][j]=='X'){
                                            printf(azul_claro "%c" reset, mg[i][j]);
                                        }else{
                                            if(mg[i][j]=='O'){
                                                printf(vermelho_claro "%c" reset, mg[i][j]);
                                            }else{
                                                if(mg[i][j]=='#'){
                                                    printf(amarelo_claro "%c" reset, mg[i][j]);
                                                }else{
                                                    if(mg[i][j]=='3'||mg[i][j]=='2'||mg[i][j]=='1'
                                                    || mg[i][j]=='C'||mg[i][j]=='B'||mg[i][j]=='A'){
                                                        printf(verde_claro "%c" reset, mg[i][j]);
                                                    }else{
                                                        printf("%c", mg[i][j]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    printf("\n");
                                }

                                for(int i=0; i<9; i++){
                                    for(int j=0; j<9; j++){
                                        mm[i][j]=' ';
                                    }
                                }
                                for(int i=0; i<3; i++){
                                    for(int j=0; j<3; j++){
                                        mp[i][j]=' ';
                                    }
                                }
                                int x,y,pi,pj,d=-1;
                                char c,jv;
                                printf("Qual quadrante voce quer jogar: ");
                                while(d!=0 && scanf("%d %c", &x, &c)){
                                    x--;
                                    d++;
                                    if(x>2){
                                        d--;
                                        printf("Numero invalido\n");
                                        continue;
                                    }
                                    pi=x;
                                    if(c=='a'||c=='A'){
                                        y=0;
                                    }else{
                                        if(c=='b'||c=='B'){
                                            y=1;
                                        }else{
                                            if(c=='c'||c=='C'){
                                                y=2;
                                            }else{
                                                d--;
                                                printf("Letra invalida\n");
                                                continue;
                                            }
                                        }
                                    }
                                    pj=y;
                                }
                                d--;
                                for(int i=0; i<11; i++){
                                    mg[pp[pi][pj][0]][pp[pi][pj][1]+i]='#';
                                }
                                for(int i=0; i<11; i++){
                                    mg[pp[pi][pj][0]+6][pp[pi][pj][1]+i]='#';
                                }
                                for(int i=1; i<6; i++){
                                    mg[pp[pi][pj][0]+i][pp[pi][pj][1]]='#';
                                }
                                for(int i=1; i<6; i++){
                                    mg[pp[pi][pj][0]+i][pp[pi][pj][1]+10]='#';
                                }

                                system("cls");
                                for(int i=0; i<38; i++){
                                    for(int j=0; j<68; j++){
                                        if(mg[i][j]=='X'){
                                            printf(azul_claro "%c" reset, mg[i][j]);
                                        }else{
                                            if(mg[i][j]=='O'){
                                                printf(vermelho_claro "%c" reset, mg[i][j]);
                                            }else{
                                                if(mg[i][j]=='#'){
                                                    printf(amarelo_claro "%c" reset, mg[i][j]);
                                                }else{
                                                    if(mg[i][j]=='3'||mg[i][j]=='2'||mg[i][j]=='1'
                                                    || mg[i][j]=='C'||mg[i][j]=='B'||mg[i][j]=='A'){
                                                        printf(verde_claro "%c" reset, mg[i][j]);
                                                    }else{
                                                        printf("%c", mg[i][j]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    printf("\n");
                                }

                                printf("Qual posicao voce quer jogar: ");
                                while(scanf("%d %c", &x, &c) && x!=123 && c!='+'){
                                    x--;
                                    d++;
                                    if(d%2==0){
                                        jv='X';
                                    }else{
                                        jv='O';
                                    }
                                    if(x>2){
                                        d--;
                                        printf("Numero invalido\n");
                                        continue;
                                    }
                                    if(c=='a'||c=='A'){
                                        y=0;
                                    }else{
                                        if(c=='b'||c=='B'){
                                            y=1;
                                        }else{
                                            if(c=='c'||c=='C'){
                                                y=2;
                                            }else{
                                                d--;
                                                printf("Letra invalida\n");
                                                continue;
                                            }
                                        }
                                    }
                                    int pi0=pm[pi][pj][0];
                                    int pj0=pm[pi][pj][1];
                                    int pi1=pm[pi][pj][0]+1;
                                    int pj1=pm[pi][pj][1]+1;
                                    int pi2=pm[pi][pj][0]+2;
                                    int pj2=pm[pi][pj][1]+2;
                                    int pia=x+pm[pi][pj][0];
                                    int pja=y+pm[pi][pj][1];
                                    if(mm[pia][pja]=='X'||mm[pia][pja]=='O'){
                                        d--;
                                        printf("Posicao invalida\n");
                                        continue;
                                    }
                                    mm[pia][pja]=jv;
                                    mg[p[pi][pj][x][y][0]][p[pi][pj][x][y][1]]=jv;
                                    for(int i=0; i<11; i++){
                                        mg[pp[pi][pj][0]][pp[pi][pj][1]+i]=' ';
                                    }
                                    for(int i=0; i<11; i++){
                                        mg[pp[pi][pj][0]+6][pp[pi][pj][1]+i]=' ';
                                    }
                                    for(int i=1; i<6; i++){
                                        mg[pp[pi][pj][0]+i][pp[pi][pj][1]]=' ';
                                    }
                                    for(int i=1; i<6; i++){
                                        mg[pp[pi][pj][0]+i][pp[pi][pj][1]+10]=' ';
                                    }
                                    system("cls");
                                    if((mm[pi0][pj0]=='X' && mm[pi0][pj1]=='X' && mm[pi0][pj2]=='X')
                                    || (mm[pi1][pj0]=='X' && mm[pi1][pj1]=='X' && mm[pi1][pj2]=='X')
                                    || (mm[pi2][pj0]=='X' && mm[pi2][pj1]=='X' && mm[pi2][pj2]=='X')
                                    || (mm[pi0][pj0]=='X' && mm[pi1][pj0]=='X' && mm[pi2][pj0]=='X')
                                    || (mm[pi0][pj1]=='X' && mm[pi1][pj1]=='X' && mm[pi2][pj1]=='X')
                                    || (mm[pi0][pj2]=='X' && mm[pi1][pj2]=='X' && mm[pi2][pj2]=='X')
                                    || (mm[pi0][pj0]=='X' && mm[pi1][pj1]=='X' && mm[pi2][pj2]=='X')
                                    || (mm[pi0][pj2]=='X' && mm[pi1][pj1]=='X' && mm[pi2][pj0]=='X')){
                                        printf("Jogador 1 conquistou um quadrante\n");
                                        for(int i=0; i<7; i++){
                                            for(int j=0; j<11; j++){
                                                mg[pp[pi][pj][0]+i][pp[pi][pj][1]+j]=' ';
                                            }
                                        }
                                        for(int i=pl[pi][pj][0],j=pl[pi][pj][1]+1; i<pl[pi][pj][0]+7; i++,j++){
                                            mg[i][j]='X';
                                            if(i<pl[pi][pj][0]+3){
                                                mg[i][j-1]='X';
                                            }else{
                                                if(i==pl[pi][pj][0]+3){
                                                    mg[i][j-1]='X';
                                                    mg[i][j+1]='X';
                                                }else{
                                                    mg[i][j+1]='X';
                                                }
                                            }
                                        }
                                        for(int i=pl[pi][pj][0],j=pl[pi][pj][1]+7; i<pl[pi][pj][0]+7; i++,j--){
                                            mg[i][j]='X';
                                            if(i<pl[pi][pj][0]+3){
                                                mg[i][j+1]='X';
                                            }else{
                                                if(i==pl[pi][pj][0]+3){
                                                    mg[i][j-1]='X';
                                                    mg[i][j+1]='X';
                                                }else{
                                                    mg[i][j-1]='X';
                                                }
                                            }
                                        }
                                        mp[pi][pj]='X';
                                    }else{
                                        if((mm[pi0][pj0]=='O' && mm[pi0][pj1]=='O' && mm[pi0][pj2]=='O')
                                        || (mm[pi1][pj0]=='O' && mm[pi1][pj1]=='O' && mm[pi1][pj2]=='O')
                                        || (mm[pi2][pj0]=='O' && mm[pi2][pj1]=='O' && mm[pi2][pj2]=='O')
                                        || (mm[pi0][pj0]=='O' && mm[pi1][pj0]=='O' && mm[pi2][pj0]=='O')
                                        || (mm[pi0][pj1]=='O' && mm[pi1][pj1]=='O' && mm[pi2][pj1]=='O')
                                        || (mm[pi0][pj2]=='O' && mm[pi1][pj2]=='O' && mm[pi2][pj2]=='O')
                                        || (mm[pi0][pj0]=='O' && mm[pi1][pj1]=='O' && mm[pi2][pj2]=='O')
                                        || (mm[pi0][pj2]=='O' && mm[pi1][pj1]=='O' && mm[pi2][pj0]=='O')){
                                            printf("Jogador 2 conquistou um quadrante\n");
                                            for(int i=0; i<7; i++){
                                                for(int j=0; j<11; j++){
                                                    mg[pp[pi][pj][0]+i][pp[pi][pj][1]+j]=' ';
                                                }
                                            }
                                            for(int i=pl[pi][pj][0],j=pl[pi][pj][1]; j<pl[pi][pj][1]+9; j++){
                                                mg[i][j]='O';
                                            }
                                            for(int i=pl[pi][pj][0]+6,j=pl[pi][pj][1]; j<pl[pi][pj][1]+9; j++){
                                                mg[i][j]='O';
                                            }
                                            for(int i=pl[pi][pj][0]+1,j=pl[pi][pj][1]; i<pl[pi][pj][0]+6; i++){
                                                mg[i][j]='O';
                                                mg[i][j+1]='O';
                                            }
                                            for(int i=pl[pi][pj][0]+1,j=pl[pi][pj][1]+8; i<pl[pi][pj][0]+6; i++){
                                                mg[i][j]='O';
                                                mg[i][j-1]='O';
                                            }
                                            mp[pi][pj]='O';
                                        }else{
                                            if((mm[pi0][pj0]=='X' || mm[pi0][pj0]=='O')
                                            && (mm[pi0][pj1]=='X' || mm[pi0][pj1]=='O')
                                            && (mm[pi0][pj2]=='X' || mm[pi0][pj2]=='O')
                                            && (mm[pi1][pj0]=='X' || mm[pi1][pj0]=='O')
                                            && (mm[pi1][pj1]=='X' || mm[pi1][pj1]=='O')
                                            && (mm[pi1][pj2]=='X' || mm[pi1][pj2]=='O')
                                            && (mm[pi2][pj0]=='X' || mm[pi2][pj0]=='O')
                                            && (mm[pi2][pj1]=='X' || mm[pi2][pj1]=='O')
                                            && (mm[pi2][pj2]=='X' || mm[pi2][pj2]=='O')){
                                                printf("Os dois jogadores conquistaram um quadrante\n");
                                                for(int i=0; i<7; i++){
                                                    for(int j=0; j<11; j++){
                                                        mg[pp[pi][pj][0]+i][pp[pi][pj][1]+j]=' ';
                                                    }
                                                }
                                                for(int i=pl[pi][pj][0],j=pl[pi][pj][1]; j<pl[pi][pj][1]+9; j++){
                                                    mg[i][j]='O';
                                                }
                                                for(int i=pl[pi][pj][0]+6,j=pl[pi][pj][1]; j<pl[pi][pj][1]+9; j++){
                                                    mg[i][j]='O';
                                                }
                                                for(int i=pl[pi][pj][0]+1,j=pl[pi][pj][1]; i<pl[pi][pj][0]+6; i++){
                                                    mg[i][j]='O';
                                                }
                                                for(int i=pl[pi][pj][0]+1,j=pl[pi][pj][1]+8; i<pl[pi][pj][0]+6; i++){
                                                    mg[i][j]='O';
                                                }
                                                for(int i=pl[pi][pj][0]+1,j=pl[pi][pj][1]+2; i<pl[pi][pj][0]+6; i++,j++){
                                                    mg[i][j]='X';
                                                }
                                                for(int i=pl[pi][pj][0]+1,j=pl[pi][pj][1]+6; i<pl[pi][pj][0]+6; i++,j--){
                                                    mg[i][j]='X';
                                                }
                                                mp[pi][pj]='2';
                                            }
                                        }
                                    }
                                    if(mp[x][y]=='X'||mp[x][y]=='O'||mp[x][y]=='2'){
                                        for(int i=0; i<38; i++){
                                            for(int j=0; j<68; j++){
                                                if(mg[i][j]=='X'){
                                                    printf(azul_claro "%c" reset, mg[i][j]);
                                                }else{
                                                    if(mg[i][j]=='O'){
                                                        printf(vermelho_claro "%c" reset, mg[i][j]);
                                                    }else{
                                                        if(mg[i][j]=='#'){
                                                            printf(amarelo_claro "%c" reset, mg[i][j]);
                                                        }else{
                                                            if(mg[i][j]=='3'||mg[i][j]=='2'||mg[i][j]=='1'
                                                            || mg[i][j]=='C'||mg[i][j]=='B'||mg[i][j]=='A'){
                                                                printf(verde_claro "%c" reset, mg[i][j]);
                                                            }else{
                                                                printf("%c", mg[i][j]);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            printf("\n");
                                        }
                                    }
                                    int j1=0,j2=0,j0=0;
                                    char mx[3][4],mo[3][4];
                                    for(int i=0; i<3; i++){
                                        for(int j=0; j<3; j++){
                                            if(mp[i][j]=='2'){
                                                mx[i][j]='X';
                                            }else{
                                                mx[i][j]=mp[i][j];
                                            }
                                        }
                                    }
                                    for(int i=0; i<3; i++){
                                        for(int j=0; j<3; j++){
                                            if(mp[i][j]=='2'){
                                                mo[i][j]='O';
                                            }else{
                                                mo[i][j]=mp[i][j];
                                            }
                                        }
                                    } 
                                    if((mx[0][0]=='X' && mx[0][1]=='X' && mx[0][2]=='X')
                                    || (mx[1][0]=='X' && mx[1][1]=='X' && mx[1][2]=='X')
                                    || (mx[2][0]=='X' && mx[2][1]=='X' && mx[2][2]=='X')
                                    || (mx[0][0]=='X' && mx[1][0]=='X' && mx[2][0]=='X')
                                    || (mx[0][1]=='X' && mx[1][1]=='X' && mx[2][1]=='X')
                                    || (mx[0][2]=='X' && mx[1][2]=='X' && mx[2][2]=='X')
                                    || (mx[0][0]=='X' && mx[1][1]=='X' && mx[2][2]=='X')
                                    || (mx[0][2]=='X' && mx[1][1]=='X' && mx[2][0]=='X')){
                                        j1++;
                                    }else{
                                        if((mx[0][0]=='O' && mx[0][1]=='O' && mx[0][2]=='O')
                                        || (mx[1][0]=='O' && mx[1][1]=='O' && mx[1][2]=='O')
                                        || (mx[2][0]=='O' && mx[2][1]=='O' && mx[2][2]=='O')
                                        || (mx[0][0]=='O' && mx[1][0]=='O' && mx[2][0]=='O')
                                        || (mx[0][1]=='O' && mx[1][1]=='O' && mx[2][1]=='O')
                                        || (mx[0][2]=='O' && mx[1][2]=='O' && mx[2][2]=='O')
                                        || (mx[0][0]=='O' && mx[1][1]=='O' && mx[2][2]=='O')
                                        || (mx[0][2]=='O' && mx[1][1]=='O' && mx[2][0]=='O')){
                                            j2++;
                                        }else{
                                            if((mx[0][0]=='X' || mx[0][0]=='O')
                                            && (mx[0][1]=='X' || mx[0][1]=='O')
                                            && (mx[0][2]=='X' || mx[0][2]=='O')
                                            && (mx[1][0]=='X' || mx[1][0]=='O')
                                            && (mx[1][1]=='X' || mx[1][1]=='O')
                                            && (mx[1][2]=='X' || mx[1][2]=='O')
                                            && (mx[2][0]=='X' || mx[2][0]=='O')
                                            && (mx[2][1]=='X' || mx[2][1]=='O')
                                            && (mx[2][2]=='X' || mx[2][2]=='O')){
                                                j0++;
                                            }
                                        }
                                    }
                                    if((mo[0][0]=='X' && mo[0][1]=='X' && mo[0][2]=='X')
                                    || (mo[1][0]=='X' && mo[1][1]=='X' && mo[1][2]=='X')
                                    || (mo[2][0]=='X' && mo[2][1]=='X' && mo[2][2]=='X')
                                    || (mo[0][0]=='X' && mo[1][0]=='X' && mo[2][0]=='X')
                                    || (mo[0][1]=='X' && mo[1][1]=='X' && mo[2][1]=='X')
                                    || (mo[0][2]=='X' && mo[1][2]=='X' && mo[2][2]=='X')
                                    || (mo[0][0]=='X' && mo[1][1]=='X' && mo[2][2]=='X')
                                    || (mo[0][2]=='X' && mo[1][1]=='X' && mo[2][0]=='X')){
                                        j1++;
                                    }else{
                                        if((mo[0][0]=='O' && mo[0][1]=='O' && mo[0][2]=='O')
                                        || (mo[1][0]=='O' && mo[1][1]=='O' && mo[1][2]=='O')
                                        || (mo[2][0]=='O' && mo[2][1]=='O' && mo[2][2]=='O')
                                        || (mo[0][0]=='O' && mo[1][0]=='O' && mo[2][0]=='O')
                                        || (mo[0][1]=='O' && mo[1][1]=='O' && mo[2][1]=='O')
                                        || (mo[0][2]=='O' && mo[1][2]=='O' && mo[2][2]=='O')
                                        || (mo[0][0]=='O' && mo[1][1]=='O' && mo[2][2]=='O')
                                        || (mo[0][2]=='O' && mo[1][1]=='O' && mo[2][0]=='O')){
                                            j2++;
                                        }else{
                                            if((mo[0][0]=='X' || mo[0][0]=='O')
                                            && (mo[0][1]=='X' || mo[0][1]=='O')
                                            && (mo[0][2]=='X' || mo[0][2]=='O')
                                            && (mo[1][0]=='X' || mo[1][0]=='O')
                                            && (mo[1][1]=='X' || mo[1][1]=='O')
                                            && (mo[1][2]=='X' || mo[1][2]=='O')
                                            && (mo[2][0]=='X' || mo[2][0]=='O')
                                            && (mo[2][1]=='X' || mo[2][1]=='O')
                                            && (mo[2][2]=='X' || mo[2][2]=='O')){
                                                j0++;
                                            }
                                        }
                                    }
                                    if(j1 && j2){
                                        printf("\n");
                                        for(int i=0;i<7;i++){
                                            printf(amarelo "%s\n" reset, empate[i]);
                                        }
                                        printf("\n");
                                        break;
                                    }else{
                                        if(j1 && !j2){
                                            printf("\n");
                                            for(int i=0;i<15;i++){
                                                printf(verde_claro "%s\n" reset, jogador1_ganhou[i]);
                                            }
                                            printf("\n");
                                            break;
                                        }else{
                                            if(!j1 && j2){
                                                printf("\n");
                                                for(int i=0;i<15;i++){
                                                    printf(verde_claro "%s\n" reset, jogador2_ganhou[i]);
                                                }
                                                printf("\n");
                                                break;
                                            }else{
                                                if(j0){
                                                    printf("\n");
                                                    for(int i=0;i<7;i++){
                                                        printf(amarelo "%s\n" reset, empate[i]);
                                                    }
                                                    printf("\n");
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    if(mp[x][y]=='X'||mp[x][y]=='O'||mp[x][y]=='2'){
                                        int dd=-1,xx,yy;
                                        char cc;
                                        printf("Qual quadrante voce quer jogar: ");
                                        while(dd!=0 && scanf("%d %c", &xx, &cc)){
                                            xx--;
                                            dd++;
                                            if(xx>2){
                                                dd--;
                                                printf("Numero invalido\n");
                                                continue;
                                            }
                                            if(cc=='a'||cc=='A'){
                                                yy=0;
                                            }else{
                                                if(cc=='b'||cc=='B'){
                                                    yy=1;
                                                }else{
                                                    if(cc=='c'||cc=='C'){
                                                        yy=2;
                                                    }else{
                                                        dd--;
                                                        printf("Letra invalida\n");
                                                        continue;
                                                    }
                                                }
                                            }
                                            if(mp[xx][yy]=='X'||mp[xx][yy]=='O'||mp[xx][yy]=='2'){
                                                dd--;
                                                printf("Posicao invalida\n");
                                                continue;
                                            }       
                                            pi=xx;
                                            pj=yy;
                                            system("cls");
                                        }     
                                    }else{
                                        pi=x;
                                        pj=y;
                                    }
                                    for(int i=0; i<11; i++){
                                        mg[pp[pi][pj][0]][pp[pi][pj][1]+i]='#';
                                    }
                                    for(int i=0; i<11; i++){
                                        mg[pp[pi][pj][0]+6][pp[pi][pj][1]+i]='#';
                                    }
                                    for(int i=1; i<6; i++){
                                        mg[pp[pi][pj][0]+i][pp[pi][pj][1]]='#';
                                    }
                                    for(int i=1; i<6; i++){
                                        mg[pp[pi][pj][0]+i][pp[pi][pj][1]+10]='#';
                                    }

                                    system("cls");
                                    for(int i=0; i<38; i++){
                                        for(int j=0; j<68; j++){
                                            if(mg[i][j]=='X'){
                                                printf(azul_claro "%c" reset, mg[i][j]);
                                            }else{
                                                if(mg[i][j]=='O'){
                                                    printf(vermelho_claro "%c" reset, mg[i][j]);
                                                }else{
                                                    if(mg[i][j]=='#'){
                                                        printf(amarelo_claro "%c" reset, mg[i][j]);
                                                    }else{
                                                        if(mg[i][j]=='3'||mg[i][j]=='2'||mg[i][j]=='1'
                                                        || mg[i][j]=='C'||mg[i][j]=='B'||mg[i][j]=='A'){
                                                            printf(verde_claro "%c" reset, mg[i][j]);
                                                        }else{
                                                            printf("%c", mg[i][j]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        printf("\n");
                                    }

                                    printf("Qual posicao voce quer jogar: ");
                                }
                            break;
                            }
                            case 5:{
                                printf("Encerrando programa...\n");
                            return 0;
                            }
                        }
                        printf("\nPressione qualquer tecla para voltar ao menu...");
                        getch();
                    }
                } 
            }
        }
    }
}   