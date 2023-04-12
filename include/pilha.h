#ifndef PILHA_H
#define PILHA_H

#include "filaCirc.h"
#include <iostream>

using namespace std;

class Pilha {
  public:

    void criaPilha();

    // checks if stack is empty
    bool pilhaVazia();

    // adds element
    void empilha(int elemento);

    // removes element
    void desempilha();

    // removes all elements
    void destroiPilha();

  private:
    Queue Pilha;
};

#endif // PILHA_H