#include "headers/priority_list.h"

int main(void) {
  LinkedList *list = init_list();
  Node *node1 = create_node(2, 'P');
  Node *node2 = create_node(3, 'P');
  Node *node3 = create_node(4, 'C');
  insert_at_head(list, node1);
  insert_at_head(list, node2);
  insert_at_head(list, node3);
  print_list(list);
  return 0;
}
