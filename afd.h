#ifndef AFD_H

#define AFD_H

#include <stdio.h>
#include <stdlib.h>

/* #Número N de estados do autôomato
   #Estado Inicial
   #Número F de estados finais
   #Estados Finais
   #Número S de símbolos do alfabeto
   #Símbolos (separados por espaço)
   #Número M de transições
   #Transições (estado_atual símbolo estado_destino)
   #Cadeia de entrada */

typedef struct afd {
  int n; // quantidade de estados do autômato
  char ini; // estado inicial
  
} AFD;

#endif
