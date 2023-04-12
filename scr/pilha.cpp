#include "pilha.h"
#include <iostream>

using namespace std;

void Pilha::criaPilha() {
  this->Pilha = Queue();
}

bool Pilha::pilhaVazia() {
  return this->Pilha.isEmpty();
}

void Pilha::empilha(int elemento) {
  this->Pilha.enQueue(elemento);
  Pilha.display();
}

void Pilha::desempilha() {
  Queue pilhaTemp = Queue();
  while (Pilha.tamanho() > 1) { 
  pilhaTemp.enQueue(Pilha.deQueue());
  }
  this->Pilha = pilhaTemp;
  this->Pilha.display();
}

void Pilha::destroiPilha() {
  this->Pilha.clean();
}
