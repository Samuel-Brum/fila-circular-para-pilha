#include "filaCirc.h"
#include "pilha.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[]) {
  srand(time(0));
  Queue fila;
  Pilha pilha;
  pilha.criaPilha();

  int random[SIZE];
  for (int i = 0; i < SIZE; i++) {
    random[i] = rand() % 10;
  }

  cout << "Sequencia aleatoria: ";
  for (int i = 0; i < SIZE; i++) {
    cout << random[i] << ", ";
  }
  cout << endl;

  cout << "Preenchendo fila: ";
  for (int i = 0; i < SIZE; i++) {
    fila.enQueue(random[i], 0);
    fila.display();
  }

  cout << "Esvaziando fila: ";
  for (int i = 0; i < SIZE; i++) {
    fila.deQueue();
    fila.display();
  }

  cout << "Preenchendo pilha: ";
  for (int i = 0; i < SIZE; i++) {
    pilha.empilha(random[i]);
  }

  cout << "Esvaziando pilha: ";
  for (int i = 0; i < SIZE; i++) {
    pilha.desempilha();
  }
  
}