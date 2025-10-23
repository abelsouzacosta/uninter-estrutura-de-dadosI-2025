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

// Insere no meio da lista baseando-se na prioridade
// dada ao cartão
void insert_based_on_priority(LinkedList *list, Node *node);

// Função para atendimento
void delete_at_head(LinkedList *list);

void print_list(LinkedList *list);

#endif
