#include "linked_list.hpp"

#include <cassert>
#include <iostream>

int main() {

  // Test case
  Linked_list my_linked_list = Linked_list();
  int value = 0;
  my_linked_list.last_value(&value);
  my_linked_list.display_list();
  my_linked_list.add_value(1);
  my_linked_list.display_list();
  std::cout << "1" << std::endl;
  my_linked_list.add_value(4);
  std::cout << "8" << std::endl;
  /*
  my_linked_list.display_list();
  my_linked_list.add_value(3);
  my_linked_list.display_list();
  my_linked_list.add_value(3);
  my_linked_list.display_list();
  my_linked_list.add_value(2);
  my_linked_list.display_list();
  my_linked_list.add_value(10);
  my_linked_list.display_list();
  */
  return 0;
}