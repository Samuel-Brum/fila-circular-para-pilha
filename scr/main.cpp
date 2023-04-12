#include "filaCirc.h"
#include "pilha.h"
#include <iostream>

int main(int argc, char *argv[]) {
  Queue fila;
  Pilha pilha;
  pilha.criaPilha();

  int random[SIZE];
  for (int i = 0; i < SIZE; i++) {
    random[i] = rand() % 10;
  }
  cout << random[0] << ' ' << random [1] << ' ' << random [2];
  
}