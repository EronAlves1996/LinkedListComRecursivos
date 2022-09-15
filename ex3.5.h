#ifndef S_LINKED_LIST_RECURSIVE
#define S_LINKED_LIST_RECURSIVE
#include "SNode.cpp"
#include <cstdlib>

template <typename T>
class SNode;

template <typename T>
class SLinkedListRecursive {
  public:
    SLinkedListRecursive();
    ~SLinkedListRecursive();
    bool isEmpty() const;
    void addFront(const T& node);
    void addBack(const T& node, SNode<T> *actualNode = NULL);
    void printAllNodes(SNode<T>* actualNode=NULL);
    T getHead() const;
    void removeFront();
    void removeBack(SNode<T>* actual = NULL);

  private:
    SNode<T> *head;
    SNode<T> *createNewNode(const T& node);
};


#endif
