#ifndef PRIORITY_LIST
#define PRIORITY_LIST

typedef struct Node {
  unsigned int number;
  char priority;
  struct Node *next;
} Node;

typedef struct LinkedList {
  struct Node *head;
  struct Node *tail;
} LinkedList;

Node *create_node(unsigned int number, char priority);

LinkedList *init_list(void);

// Insere como primeiro elemento da lista
void insert_at_head(LinkedList *list, Node *node);

// Insere como último elemento da listas
void insert_at_tail(LinkedList *list, Node *node);

// Insere no meio da lista
// Será a inserção baseada em prioridade
void insert(LinkedList *list, Node *node);


#endif
