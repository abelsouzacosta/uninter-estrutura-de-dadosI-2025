#include "../headers/priority_list.h"
#include <stdio.h>
#include <stdlib.h>

Node *create_node(unsigned int number, char priority) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  if (new_node != NULL) {
    fprintf(stderr, "Erro durante a alocação");
    exit(EXIT_FAILURE);
  }
  new_node->number = number;
  new_node->priority = priority;
  new_node->next = NULL;
  return new_node;
}

