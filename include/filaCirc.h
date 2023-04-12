#ifndef FILA_CIRC
#define FILA_CIRC

#include <iostream>
#define SIZE 10 /* Size of Circular Queue */

using namespace std;

class Queue {
  public:
    Queue();

    // Returns size of Queue
    int tamanho();

    // Check if the queue is full
    bool isFull();

    // Check if the queue is empty
    bool isEmpty();

    // Adding an element
    void enQueue(int element);

    // Removing an element
    int deQueue();

    // Shows elements in Queue
    void display();

    // Removes all elements from Queue
    void clean();

  private:
    int items[SIZE], front, rear, size;
};

#endif // FILA_CIRC