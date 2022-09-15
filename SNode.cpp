#ifndef S_NODE
#define S_NODE

template <typename T>
class SLinkedListRecursive;

template <typename T>
class SNode {
  T node;
  SNode<T>* next;
  friend class SLinkedListRecursive<T>;
};

#endif
