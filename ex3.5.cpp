#include <cstddef>
#include <iostream>
#include "ex3.5.h"

template <typename T>
SLinkedListRecursive<T>::SLinkedListRecursive():head(NULL) {};

template <typename T>
SLinkedListRecursive<T>::~SLinkedListRecursive() {
  removeFront();
  if(!isEmpty()) ~SLinkedListRecursive();
}

template <typename T>
bool SLinkedListRecursive<T>::isEmpty() const { 
  if(head == NULL) 
    return true; 
  return false;
};

template <typename T>
void SLinkedListRecursive<T>::addFront(const T& node){
  SNode<T> *newNode = createNewNode(node);
  newNode->next = head;
  head = newNode;
};

template <typename T>
void SLinkedListRecursive<T>::addBack(const T& node, SNode<T> *actualNode){
  if(isEmpty()){
    addFront(node);
    return;
  }

  if (actualNode == NULL) {
    addBack(node, head);
  }else if (actualNode->next == NULL){
    SNode<T> *newNode = createNewNode(node);
    newNode->next = NULL;
    actualNode->next = newNode;
  } else {
    addBack(node, actualNode->next);
  }
}

template <typename T>
void SLinkedListRecursive<T>::printAllNodes(SNode<T>* actualNode){
  if(isEmpty()) return;
  if(actualNode == NULL) 
    printAllNodes(head);
  else if(actualNode->next == NULL){
    std::cout << actualNode->node << std::endl;
  } else {
    std::cout << actualNode->node << std::endl;
    printAllNodes(actualNode->next);
  }
}

template <typename T>
T SLinkedListRecursive<T>::getHead() const {
  return head->node;
}

template <typename T>
void SLinkedListRecursive<T>::removeFront() {
  SNode<T>* oldHead = head;
  head = head->next;
  delete oldHead;
}

template <typename T>
void SLinkedListRecursive<T>::removeBack(SNode<T>* actual) {
  if(isEmpty()) return;
  if(actual == NULL) {
    removeBack(head);
    return;
  }
  if(actual->next == NULL) {
    removeFront();
    return;
  }

  if(actual->next->next == NULL){
    delete actual->next;
    actual->next = NULL;
  } else {
    removeBack(actual->next);
  }
}

template <typename T>
SNode<T> *SLinkedListRecursive<T>::createNewNode(const T& node){
  SNode<T> *newNode = new SNode<T>();
  newNode->node = node;
  return newNode;
}

