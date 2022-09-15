#include "ex3.5.cpp"
#include "ex3.5.h"
#include <string>

int main(){
  SLinkedListRecursive<std::string>* ll = new SLinkedListRecursive<std::string>();

  std::string primeiro = "Primeiro", nPrimeiro = "Novo primeiro", ultimo = "último", nUltimo = "Novo Último";
  ll->addFront(primeiro);
  ll->addFront(nPrimeiro);
  ll->addBack(ultimo);
  ll->addBack(nUltimo);
  std::cout << ll->getHead() << std::endl;
  ll->printAllNodes();
  ll->removeBack();
  puts("\nRemoveu um back \n\n");
  ll->printAllNodes();
  ll->removeFront();
  puts("\nRemoveu um front \n\n");
  ll->printAllNodes();
  ll->removeBack();
  puts("\nRemoveu um back \n\n");
  ll->printAllNodes();
  ll->removeBack();
  puts("\nRemoveu um back \n\n");
  ll->printAllNodes();
}
