#ifdef __cplusplus
#include "../../src/classes/list/linked_list.h"
#include <iostream>
#endif

int main() {
  linked_list<int> l1({4, 5}), l2;
  l1.push_back(1);
  l1.push_back(2);
  l1.push_back(-1);
  std::cout << l1 << '\n';
  std::cout << '\n';
  if (l1.search(0)) {
    std::cout << "Yes" << '\n';
  }
}