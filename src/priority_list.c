#include "../headers/priority_list.h"
#include <stdio.h>
#include <stdlib.h>

Node *create_node(unsigned int number, char priority) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  if (new_node == NULL) {
    fprintf(stderr, "Erro durante a alocação Nó");
    exit(EXIT_FAILURE);
  }
  new_node->number = number;
  new_node->priority = priority;
  new_node->next = NULL;
  return new_node;
}

LinkedList *init_list(void) {
  LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
  if (list == NULL) {
    fprintf(stderr, "Erro durante a alocação Lista");
    exit(EXIT_FAILURE);
  }
  list->head = NULL;
  list->tail = NULL;
  return list;
}

void insert_at_head(LinkedList *list, Node *node) {
  if (list->head != NULL) {
    Node *old_head = list->head;
    node->next = old_head;
    list->head = node;
    return;
  }
  list->head = node;
  list->tail = node;
  return;
}

void insert_at_tail(LinkedList *list, Node *node) {
  if (list->head != NULL) {
    Node *old_tail = list->tail;
    old_tail->next = node;
    list->tail = node;
    return;
  }
  list->head = node;
  list->tail = node;
  return;
}

