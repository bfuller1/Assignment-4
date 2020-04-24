#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//#inlcude "makeQueue.h"
/*

class makeListNode
{
public:
  int info;
  makeListNode *next;
  makeListNode *prev;
// constructor and overloaded
  makeListNode();
  makeListNode(int x);
  //~makeListNode();

};

makeListNode::makeListNode()
{
  info = 0;
  next = NULL;
  prev = NULL:

}

makeListNode::makeListNode(int x)
{
  info = x;
  next = NULL;
  prev = NULL;
}
*/
class makeList
{
private:
//  ListNode *front;
//  ListNode *back;
//  unsigned int length;

public:
  //makeList();

  void readFile();

  //void insertFront(int info);
  //void insertBackt(int info);
  //int removeFront();
  //int removeBack();
  //int search(int value);
  //int removeAtPos(int position);

  //unsigned int getLength();
  //bool isEmpty();
  //void printList();
};
/*
makeList::makeList()
{
  length = 0;
  front = NULL;
  back = NULL;
}

unsigned int makeList::getLength()
{
  return length;
}

bool makeList::isEmpty()
{
  return (length == 0);
}

void makeList::printList(){
    ListNode *curr = front;

    while(curr != NULL){
      cout << curr->info << endl;
      curr = curr->next;
    }
}

void makeList::insertFront(int x){
  ListNode *node = new ListNode(d);

  if(isEmpty()){
    back = node;
  }
  else{
    front->prev = node;
    node->next = front;
  }
  front = node;
  length ++;
}

int makeList::removeFront(){
  if(isEmpty()){
    front = node;
  }
  else{
    back-> next = node;
    node->prev = back;
  }
  back = node;
  length++;
}

*/

//I commented out everything that did not work, the read file function was the only thing that worked
// As you can see from the comments I very closely followed the generating a list node, generating a 2d list, and generating a queue from the one given in class
void makeList::readFile() {
  string fileName;
  string fileLine;

  cout << "Enter the name of a text file you would like to use: " << endl;
  cin >> fileName;

  ifstream myFile (fileName);
  if (myFile.is_open()) {
    while (getline (myFile, fileLine)) {
      cout << fileLine << endl;
    }
    myFile.close();
  }
  else cout << "Cannot open file";
}
