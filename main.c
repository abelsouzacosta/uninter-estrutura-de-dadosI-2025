#include "headers/priority_list.h"

int main(void) {
  LinkedList *list = init_list();
  Node *node1 = create_node(1, 'P');
  Node *node2 = create_node(2, 'P');
  Node *node3 = create_node(3, 'C');
  insert_based_on_priority(list, node1);
  insert_based_on_priority(list, node3);
  insert_based_on_priority(list, node2);
  print_list(list);
  return 0;
}
