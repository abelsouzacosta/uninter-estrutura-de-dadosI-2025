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


#endif
