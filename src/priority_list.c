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

void insert_based_on_priority(LinkedList *list, Node *node) {
  // lista vazia
  if (list->head == NULL) {
    insert_at_head(list, node);
    return;
  }
  // qualquer outra prioridade é inserida no fim da lista
  if (node->priority != PATTERN) {
    insert_at_tail(list, node);
    return;
  }
  // Nó para percorrer a lista
  Node *current = list->head;
  // Variável para guardar o match
  Node *priority_match = NULL;
  while (current != NULL && current->priority == PATTERN) {
    priority_match = current;
    current = current->next;
  }
  // a referencia não existe na lista
  if (priority_match == NULL) {
    insert_at_head(list, node);
    return;
  }
  // a referência é o tail da lista
  if (priority_match == list->tail) {
    insert_at_tail(list, node);
    return;
  }
  node->next = priority_match->next;
  priority_match->next = node;
}

void print_list(LinkedList *list) {
  if (list->head == NULL) {
    fprintf(stderr, "Lista vazia");
    return;
  }
  Node *current = list->head;
  while (current != NULL) {
    if (current == list->tail) {
      printf(" %c :: %d\n", current->priority, current->number);
    } else
      printf(" %c :: %d ->", current->priority, current->number);
    current = current->next;
  }
}
