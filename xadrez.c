#include <stdio.h>

// FUNÇÕES RECURSIVAS

// Torre rec
void moverTorreRec(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreRec(casas - 1);
}

// Bispo rec loops aninhados
void moverBispoRec(int casas) {
    if (casas == 0) return;
    for (int v = 0; v < 1; v++) {      // v
        for (int h = 0; h < 1; h++) {  // h
            printf("Cima Direita\n");
        }
    }
    moverBispoRec(casas - 1);
}

// Rainha rec
void moverRainhaRec(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaRec(casas - 1);
}

// Cavalo loops 
void moverCavaloComplexo(const char* dirLongo, const char* dirCurto) {
    for (int i = 1, j = 0; i <= 2; i++, j++) {
        printf("%s\n", dirLongo);
        if (i < 2) continue; // só faz o movimento curto no final
        for (int k = 0; k < 1; k++) {
            printf("%s\n", dirCurto);
        }
    }
}

// ------------------ MAIN ------------------
int main() {
    //  NÍVEL NOVATO 
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("=== Nível Novato ===\n");

    // Torre (for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo (while)
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // Rainha (do-while)
    printf("Movimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);
    printf("\n");

    //  NÍVEL AVENTUREIRO 
    printf("=== Nível Aventureiro ===\n");
    printf("Movimento do Cavalo (Baixo + Esquerda):\n");
    for (int v = 0; v < 2; v++) { 
        printf("Baixo\n");
        int h = 0;
        while (v == 1 && h < 1) { // h só no segundo passo
            printf("Esquerda\n");
            h++;
        }
    }
    printf("\n");

    //  NÍVEL MESTRE 
    printf("=== Nível Mestre ===\n");

    printf("Movimento da Torre (Recursivo):\n");
    moverTorreRec(casasTorre);
    printf("\n");

    printf("Movimento do Bispo (Recursivo + Loops Aninhados):\n");
    moverBispoRec(casasBispo);
    printf("\n");

    printf("Movimento da Rainha (Recursivo):\n");
    moverRainhaRec(casasRainha);
    printf("\n");

    printf("Movimento do Cavalo (Cima + Direita, loops complexos):\n");
    moverCavaloComplexo("Cima", "Direita");

    return 0;
}
