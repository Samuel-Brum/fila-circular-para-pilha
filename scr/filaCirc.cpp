// Circular Queue implementation in C++
// Obtido de https://www.programiz.com/dsa/circular-queue

#include "filaCirc.h"

Queue::Queue() {
  front = -1;
  rear = -1;
}

int Queue::tamanho() {
  int tam = rear - front + 1;
  return (tam);
}

// Check if the queue is full
bool Queue::isFull() {
  if (front == 0 && rear == SIZE - 1) {
    return true;
  }
  if (front == rear + 1) {
    return true;
  }
  return false;
}
// Check if the queue is empty
bool Queue::isEmpty() {
  if (front == -1)
    return true;
  else
    return false;
}
// Adding an element
void Queue::enQueue(int element, int tipo) {
  if (isFull()) {
    cout << "Queue is full" << endl;
  } else {
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    items[rear] = element;
    if (tipo == 0) {
      cout << "Adicionando: " << element << endl;
    }
  }
}
// Removing an element
int Queue::deQueue() {
  int element;
  if (isEmpty()) {
    cout << "Queue is empty" << endl;
    return (-1);
  } else {
    element = items[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    }
    // Q has only one element,
    // so we reset the queue after deleting it.
    else {
      front = (front + 1) % SIZE;
    }
    return (element);
    cout << "Removendo: " << element << endl;
  }
}

void Queue::display() {
  // Function to display status of Circular Queue
  int i;
  if (isEmpty()) {
    cout << endl
        << "Empty Queue" << endl;
  } else {
    cout << "Front -> " << front << endl;
    cout << "Rear -> " << rear << endl;
    cout << "Items -> ";
    for (i = front; i != rear; i = (i + 1) % SIZE)
      cout << items[i] << ", ";
    cout << items[i];
    cout << endl << endl;

  }
}

void Queue::clean() {
  front = -1;
  rear = -1;
}
