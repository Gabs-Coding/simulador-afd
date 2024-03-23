#ifndef AFD_H

#define AFD_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* #Número N de estados do autôomato
   #Estado Inicial
   #Número F de estados finais
   #Estados Finais
   #Número S de símbolos do alfabeto
   #Símbolos (separados por espaço)
   #Número M de transições
   #Transições (estado_atual símbolo estado_destino)
   #Cadeia de entrada */

typedef struct transicao {
  char e_atual; // estado atual da transição;
  char sim_transicao; // símbolo de transição;
  char e_destino; // estado de destino da transição;
} Transicao;

typedef struct lista_duplamente_encadeada ListaDuplamenteEncadeada;

struct lista_duplamente_encadeada {
  Transicao transicao; // Dado armazenado;
  ListaDuplamenteEncadeada *ante; // Nó anterior;
  ListaDuplamenteEncadeada *prox; // Nó posterior;
};

// Estrutura para armazenar a definição do autômato.
typedef struct definicao {
  size_t n; // quantidade de estados do autômato;
  char ini; // estado inicial;
  size_t qtd_efinais; // quantidade de estados finais;
  char *estados_finais; // estados finais do autômato;
  size_t tam_alfabeto; // número de símbolos do alfabeto;
  char *simbolos_alfabeto; // símbolos do alfabeto;
  size_t qtd_transicoes; // número de transições de estados do autômato;
  char *transicoes; // as transicoes de estado do autômato;
  char *cadeia_entrada; // cadeia de entrada para testar a sua validade;
} Definicao;

typedef struct afd {
  Definicao *definicao_automato; // Uma cópia da estrutura lida para ser usada pelo autômato;
  ListaDuplamenteEncadeada *lde_transicoes; // lista duplamente encadeada;
} AFD;

// Funções e procedimentos para manipular a lista duplamente encadeada;
void criar(ListaDuplamenteEncadeada *lde);
bool eh_vazia(ListaDuplamenteEncadeada *lde);
void inserir(ListaDuplamenteEncadeada *lde, Transicao transicao);

// Funções e procedimentos para manipular o Autômato Finito Determinístico;
bool tem_transicao(ListaDuplamenteEncadeada *lde, Transicao transicao);

#endif
