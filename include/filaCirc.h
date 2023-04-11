// Circular Queue implementation in C++

#ifndef FILA_CIRC
#define FILA_CIRC

#include <iostream>
#define SIZE 10 /* Size of Circular Queue */

using namespace std;

class Queue {
  public:
    Queue();

    // Check if the queue is full
    bool isFull() ;

    // Check if the queue is empty
    bool isEmpty();

    // Adding an element
    void enQueue(int element);

    // Removing an element
    int deQueue();

    void display();

  private:
    int items[SIZE], front, rear;
};

#endif // FILA_CIRC