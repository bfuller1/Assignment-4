/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class makeQueue {
public:
  void createQueue();

  makeQueue();
  makeQueue(int maxLength);

  void insert(char d);
  char remove();

  char peek();
  bool isFull();
  bool isEmpty();
  int getSize();

  int front;
  int back;
  int mSzie;
  int numElements;

private:
  // N/A
};

makeQueue::makeQueue() {
  front = 0;
  back = -1;
  numElements = 0;
}

void makeQueue::insert(char d) {
  makeQueue[++back] = d;
  ++numElements;
}

char makeQueue::remove() {
  char n = '\0';
  n = makeQueue[front];
  ++ front;
  -- numElements;
  return n;
}

char makeQueue::peek() {
  return makeQueue[front];
}

bool makeQueue::isEmpty() {
  return (numElements == 0);
}

int makeQueue::getSize() {
  return numElements;
}
*/
