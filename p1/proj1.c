#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARREIRAS 200
#define MAX_PARAGENS 10000
#define MAX_LIGACOES 30000

#define MAX_NOME_PARAGEM 51
#define MAX_NOME_CARREIRA 21

#define MAX_LINE BUFSIZ
#define NAO_ENCONTRADO -1
#define VERDADE 1
#define FALSO 0

/* Tipos de Dados */

typedef struct {
    char nome[MAX_NOME_PARAGEM];
    double latitude, longitude;
    int idCarreiras[MAX_CARREIRAS];
    int numCarreiras;
} Paragem;

typedef struct {
    int idCarreira;
    int idOrigem, idDestino;
    double custo, duracao;
} Ligacao;

typedef struct {
    char nome[MAX_NOME_CARREIRA];
    double custoTotal;
    double duracaoTotal;
    int idLigacoes[MAX_LIGACOES];
    int numLigacoes;
} Carreira;


int main() {
    int c;

    do {
        c = getchar();
        switch(c) {
            case 'c':
                //carreiras();
                break;
            case 'p':
                //paragens();
                break;
            case 'l':
                //ligacoes();
                break;
            case 'i':
                // intersecoes();
                break;
            case 'q':
                break;
            default:
            if (c == ' ' || c == '\t' || c == '\n') break;
        }
    } while (c != 'q' && c != EOF);

    return 0;
}
