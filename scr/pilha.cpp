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
}

void Pilha::desempilha() {
}
